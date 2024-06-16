#include "pch.h"
#include "Form1.h"
#include <windows.h>
#include <winhttp.h>
#include "apikey.h"
#include <string>
#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include <msclr/marshal_cppstd.h>
#include <cmath>
#include <codecvt>
#include <iomanip>
#include <locale>
#include <ctime>
#include <sstream>
#pragma comment(lib, "winhttp.lib")
using json = nlohmann::json;

#using <System.Net.dll>
#using <System.Drawing.dll>
#using <System.dll>
#using <System.Windows.Forms.dll>

using namespace System::Net;
using namespace System::IO;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace WeatherApp;

std::string PerformHttpRequest(const std::wstring& url);

std::wstring ConvertToDayOfWeek(const std::string& dateTime);





    

System::Void Form1::getWeatherButton_Click(System::Object^ sender, System::EventArgs^ e)
{


    
    std::wstring city = msclr::interop::marshal_as<std::wstring>(this->cityTextBox->Text);

    std::string apiKeyStr = API_KEY;
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring apiKey = converter.from_bytes(apiKeyStr);
    

    //
    // URL get request 
    //

    std::wstring geoCodingUrl = L"/geo/1.0/direct?q=" + city + L"&limit=1&appid=" + apiKey;
    std::string geoCodingResponse = PerformHttpRequest(geoCodingUrl);

  
    double lat = 0.0;
    double lon = 0.0;

    // json response city cordinates 

    if (!geoCodingResponse.empty()) {
        try {
            json geoJsonResponse = json::parse(geoCodingResponse);
            if (!geoJsonResponse.empty()) {
                lat = geoJsonResponse[0]["lat"];
                lon = geoJsonResponse[0]["lon"];
                Console::WriteLine("Latitude: " + lat + ", Longitude: " + lon);
            }
        }
        catch (const std::exception& e) {
            Console::WriteLine("Error parsing geo JSON: " + gcnew System::String(e.what()));
        }
    }
    else {
        Console::WriteLine("Failed to get geo coordinates.");
    }

    // URL for the current weather 

    std::wstring currentWeatherUrl = L"/data/2.5/weather?lat=" + std::to_wstring(lat) + L"&lon=" + std::to_wstring(lon) + L"&appid=" + apiKey;

    // get current weather

    std::string currentWeatherResponse = PerformHttpRequest(currentWeatherUrl);

    if (!currentWeatherResponse.empty())
    {
        try {
            json jsonResponse = json::parse(currentWeatherResponse);

            // json get weather 

            double windSpeed = jsonResponse["wind"]["speed"];
            double temperatureKelvin = jsonResponse["main"]["temp"];
            double temperatureCelsius = temperatureKelvin - 273.15;
            int humidity = jsonResponse["main"]["humidity"];
            int pressure = jsonResponse["main"]["pressure"];
            long sunriseTimestamp = jsonResponse["sys"]["sunrise"];
            long sunsetTimestamp = jsonResponse["sys"]["sunset"];

            // calc wind speed

            double windSpeedKmH = windSpeed * 3.6;

            // calc temp with rounded digital

            std::wstringstream tempStream, windStream, humidityStream, pressureStream, sunriseStream, sunsetStream;
            tempStream << std::fixed << std::setprecision(1) << temperatureCelsius;
            windStream << std::fixed << std::setprecision(1) << windSpeedKmH;
            humidityStream << humidity;
            pressureStream << pressure;

            // sunset (sunrise)

            std::time_t sunriseTime = static_cast<std::time_t>(sunriseTimestamp);
            std::time_t sunsetTime = static_cast<std::time_t>(sunsetTimestamp);
            std::tm sunriseTm, sunsetTm;
            localtime_s(&sunriseTm, &sunriseTime);
            localtime_s(&sunsetTm, &sunsetTime);

            wchar_t sunriseBuffer[16];
            wchar_t sunsetBuffer[16];
            std::wcsftime(sunriseBuffer, sizeof(sunriseBuffer), L"%H:%M:%S", &sunriseTm);
            std::wcsftime(sunsetBuffer, sizeof(sunsetBuffer), L"%H:%M:%S", &sunsetTm);
            sunriseStream << sunriseBuffer;
            sunsetStream << sunsetBuffer;

            std::string iconCode = jsonResponse["weather"][0]["icon"];
            std::wstring iconUrl = L"http://openweathermap.org/img/wn/" + std::wstring(iconCode.begin(), iconCode.end()) + L"@4x.png";

            // icon loader

            WebClient^ webClient = gcnew WebClient();
            array<Byte>^ imageBytes = webClient->DownloadData(gcnew System::String(iconUrl.c_str()));
            MemoryStream^ ms = gcnew MemoryStream(imageBytes);
            Bitmap^ weatherIcon = gcnew Bitmap(ms);

            

            // Displaying weather data

            this->temperatureLabel->Text = gcnew System::String((tempStream.str() + L"°C").c_str());
            this->windSpeedLabel->Text = gcnew System::String((windStream.str() + L" km/h").c_str());
            this->humidityLabel->Text = gcnew System::String((humidityStream.str() + L"%").c_str());
            this->pressureLabel->Text = gcnew System::String((pressureStream.str() + L" hPa").c_str());
            this->sunriseLabel->Text = gcnew System::String(sunriseStream.str().c_str());
            this->sunsetLabel->Text = gcnew System::String(sunsetStream.str().c_str());
            this->weatherPictureBox->Image = weatherIcon;

        }
        catch (const std::exception& e) {
            Console::WriteLine("Error parsing JSON: " + gcnew System::String(e.what()));
        }
    }
    else {
        Console::WriteLine("Failed to get current weather.");
    }
    
    //get weekly weather forecast

    std::wstringstream weeklyWeatherUrl;
    weeklyWeatherUrl << L"/data/2.5/forecast?lat=" + std::to_wstring(lat) + L"&lon=" + std::to_wstring(lon) + L"&appid=" + apiKey;


    
    std::string weeklyWeatherResponse = PerformHttpRequest(weeklyWeatherUrl.str());



    if (!weeklyWeatherResponse.empty())
    {
        try {
            json jsonResponse = json::parse(weeklyWeatherResponse);
            Console::WriteLine("Weekly weather response: " + gcnew System::String(weeklyWeatherResponse.c_str()));

            WebClient^ webClient = gcnew WebClient();

            int dayCount = 0;
            for (const auto& dayWeather : jsonResponse["list"])
            {
                std::string dateTime = dayWeather["dt_txt"];
                if (dateTime.find("12:00:00") != std::string::npos) // take data from 12:00
                {
                    double temp = dayWeather["main"]["temp"];
                    std::string iconCode = dayWeather["weather"][0]["icon"];
                    std::wstring iconUrl = L"http://openweathermap.org/img/wn/" + std::wstring(iconCode.begin(), iconCode.end()) + L"@2x.png";

                    // kelvin and celsius

                    double tempCelsius = temp - 273.15;

                    // rounded temp

                    int roundedTemp = static_cast<int>(std::round(tempCelsius));

                    std::wstring dayOfWeek = ConvertToDayOfWeek(dateTime);

                    std::wstringstream dayStream;
                    dayStream << dayOfWeek << L"\n " << roundedTemp << L"°C";

                    std::wstring dayLabelName = L"day" + std::to_wstring(dayCount + 1) + L"Label";
                    std::wstring dayPictureBoxName = L"day" + std::to_wstring(dayCount + 1) + L"PictureBox";

                    System::Windows::Forms::Label^ dayLabel = dynamic_cast<System::Windows::Forms::Label^>(this->Controls[gcnew System::String(dayLabelName.c_str())]);
                    System::Windows::Forms::PictureBox^ dayPictureBox = dynamic_cast<System::Windows::Forms::PictureBox^>(this->Controls[gcnew System::String(dayPictureBoxName.c_str())]);

                    if (dayLabel != nullptr && dayPictureBox != nullptr)
                    {
                        dayLabel->Text = gcnew System::String(dayStream.str().c_str());

                        //icon for 5 days weather forecast

                        array<Byte>^ imageBytes = webClient->DownloadData(gcnew System::String(iconUrl.c_str()));
                        MemoryStream^ ms = gcnew MemoryStream(imageBytes);
                        Bitmap^ weatherIcon = gcnew Bitmap(ms);
                        dayPictureBox->Image = weatherIcon;

                        
                    }
                    else {
                        Console::WriteLine("Failed to find control for day " + (dayCount + 1).ToString());
                    }

                    if (++dayCount >= 5) break; // stop after 5 days
                }
            }
        }
        catch (const std::exception& e) {
            Console::WriteLine("Error parsing weekly JSON: " + gcnew System::String(e.what()));
        }
    }
    else {
        Console::WriteLine("Failed to get weekly weather.");
    }
   
}

//
// converting day of week 
//

std::wstring ConvertToDayOfWeek(const std::string& dateTime)
{
    std::tm tm = {};
    std::istringstream ss(dateTime);
    ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");

    std::time_t time = std::mktime(&tm);
    std::tm gmtm;
    localtime_s(&gmtm, &time);
    wchar_t buffer[10];
    std::wcsftime(buffer, sizeof(buffer) / sizeof(wchar_t), L"%A", &gmtm);

    return std::wstring(buffer);
}

//
// http requset from openweathermap
//

std::string PerformHttpRequest(const std::wstring& url)
{
    HINTERNET hSession = WinHttpOpen(L"A WinHTTP Example Program/1.0",
        WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
        WINHTTP_NO_PROXY_NAME,
        WINHTTP_NO_PROXY_BYPASS, 0);

    if (hSession)
    {
        HINTERNET hConnect = WinHttpConnect(hSession, L"api.openweathermap.org",
            INTERNET_DEFAULT_HTTPS_PORT, 0);

        if (hConnect)
        {
            HINTERNET hRequest = WinHttpOpenRequest(hConnect, L"GET", url.c_str(),
                NULL, WINHTTP_NO_REFERER,
                WINHTTP_DEFAULT_ACCEPT_TYPES,
                WINHTTP_FLAG_SECURE);

            if (hRequest)
            {
                BOOL bResults = WinHttpSendRequest(hRequest,
                    WINHTTP_NO_ADDITIONAL_HEADERS, 0,
                    WINHTTP_NO_REQUEST_DATA, 0,
                    0, 0);

                if (bResults)
                {
                    bResults = WinHttpReceiveResponse(hRequest, NULL);
                    if (bResults)
                    {
                        DWORD dwSize = 0;
                        std::string responseStr;
                        do
                        {
                            WinHttpQueryDataAvailable(hRequest, &dwSize);

                            if (dwSize > 0)
                            {
                                char* pszOutBuffer = new char[dwSize + 1];
                                ZeroMemory(pszOutBuffer, dwSize + 1);

                                DWORD dwDownloaded = 0;
                                if (WinHttpReadData(hRequest, (LPVOID)pszOutBuffer,
                                    dwSize, &dwDownloaded))
                                {
                                    responseStr.append(pszOutBuffer, dwDownloaded);
                                    delete[] pszOutBuffer;
                                }
                                else
                                {
                                    delete[] pszOutBuffer;
                                    break;
                                }
                            }
                        } while (dwSize > 0);
                        WinHttpCloseHandle(hRequest);
                        WinHttpCloseHandle(hConnect);
                        WinHttpCloseHandle(hSession);
                        return responseStr;
                    }
                    WinHttpCloseHandle(hRequest);
                }
                WinHttpCloseHandle(hConnect);
            }
            WinHttpCloseHandle(hSession);
        }


    }
    return "";
}



