#pragma once


namespace WeatherApp {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Drawing::Drawing2D;

    public ref class Form1 : public System::Windows::Forms::Form
    {


    public:
        Form1(void)
        {
            InitializeComponent();
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::ComponentModel::IContainer^ components;
    private: System::Windows::Forms::TextBox^ cityTextBox;
    private: System::Windows::Forms::Button^ getWeatherButton;
    private: System::Windows::Forms::Label^ windSpeedLabel;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::PictureBox^ weatherPictureBox;
    private: System::Windows::Forms::Label^ temperatureLabel;
    private: System::Windows::Forms::Label^ humidityLabel;
    private: System::Windows::Forms::Label^ pressureLabel;
    private: System::Windows::Forms::Label^ sunriseLabel;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::Label^ day1Label;
    private: System::Windows::Forms::PictureBox^ day1PictureBox;
    private: System::Windows::Forms::Label^ day2Label;
    private: System::Windows::Forms::PictureBox^ day2PictureBox;
    private: System::Windows::Forms::Label^ day3Label;
    private: System::Windows::Forms::PictureBox^ day3PictureBox;
    private: System::Windows::Forms::Label^ day4Label;
    private: System::Windows::Forms::PictureBox^ day4PictureBox;
    private: System::Windows::Forms::Label^ day5Label;
    private: System::Windows::Forms::PictureBox^ day5PictureBox;
    private: System::Windows::Forms::Label^ sunsetLabel;

   





        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->cityTextBox = (gcnew System::Windows::Forms::TextBox());
            this->getWeatherButton = (gcnew System::Windows::Forms::Button());
            this->temperatureLabel = (gcnew System::Windows::Forms::Label());
            this->windSpeedLabel = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->weatherPictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->humidityLabel = (gcnew System::Windows::Forms::Label());
            this->pressureLabel = (gcnew System::Windows::Forms::Label());
            this->sunriseLabel = (gcnew System::Windows::Forms::Label());
            this->sunsetLabel = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->day1Label = (gcnew System::Windows::Forms::Label());
            this->day1PictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->day2PictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->day2Label = (gcnew System::Windows::Forms::Label());
            this->day3PictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->day3Label = (gcnew System::Windows::Forms::Label());
            this->day4PictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->day4Label = (gcnew System::Windows::Forms::Label());
            this->day5PictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->day5Label = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weatherPictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day1PictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day2PictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day3PictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day4PictureBox))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day5PictureBox))->BeginInit();
            this->SuspendLayout();
            // 
            // cityTextBox
            // 
            this->cityTextBox->BackColor = System::Drawing::Color::White;
            this->cityTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->cityTextBox->ForeColor = System::Drawing::SystemColors::Control;
            this->cityTextBox->Location = System::Drawing::Point(648, 110);
            this->cityTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->cityTextBox->Name = L"cityTextBox";
            this->cityTextBox->Size = System::Drawing::Size(400, 50);
            this->cityTextBox->TabIndex = 0;
            this->cityTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // getWeatherButton
            // 
            this->getWeatherButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)));
            this->getWeatherButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->getWeatherButton->FlatAppearance->BorderSize = 0;
            this->getWeatherButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->getWeatherButton->Location = System::Drawing::Point(1115, 100);
            this->getWeatherButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->getWeatherButton->Name = L"getWeatherButton";
            this->getWeatherButton->Size = System::Drawing::Size(179, 60);
            this->getWeatherButton->TabIndex = 1;
            this->getWeatherButton->Text = L"Get Weather";
            this->getWeatherButton->UseVisualStyleBackColor = false;
            this->getWeatherButton->Click += gcnew System::EventHandler(this, &Form1::getWeatherButton_Click);
            // 
            // temperatureLabel
            // 
            this->temperatureLabel->BackColor = System::Drawing::Color::Transparent;
            this->temperatureLabel->Cursor = System::Windows::Forms::Cursors::Default;
            this->temperatureLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->temperatureLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->temperatureLabel->Location = System::Drawing::Point(313, 95);
            this->temperatureLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->temperatureLabel->Name = L"temperatureLabel";
            this->temperatureLabel->Size = System::Drawing::Size(179, 65);
            this->temperatureLabel->TabIndex = 2;
            this->temperatureLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // windSpeedLabel
            // 
            this->windSpeedLabel->BackColor = System::Drawing::Color::Transparent;
            this->windSpeedLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->windSpeedLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->windSpeedLabel->Location = System::Drawing::Point(321, 178);
            this->windSpeedLabel->Name = L"windSpeedLabel";
            this->windSpeedLabel->Size = System::Drawing::Size(171, 64);
            this->windSpeedLabel->TabIndex = 3;
            this->windSpeedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label1->Location = System::Drawing::Point(75, 105);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(206, 45);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Temperature:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label2->Location = System::Drawing::Point(79, 188);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(200, 45);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Wind Speed:";
            // 
            // weatherPictureBox
            // 
            this->weatherPictureBox->BackColor = System::Drawing::Color::Transparent;
            this->weatherPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->weatherPictureBox->Location = System::Drawing::Point(751, 230);
            this->weatherPictureBox->Name = L"weatherPictureBox";
            this->weatherPictureBox->Size = System::Drawing::Size(212, 190);
            this->weatherPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->weatherPictureBox->TabIndex = 10;
            this->weatherPictureBox->TabStop = false;
            // 
            // humidityLabel
            // 
            this->humidityLabel->BackColor = System::Drawing::Color::Transparent;
            this->humidityLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->humidityLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->humidityLabel->Location = System::Drawing::Point(299, 256);
            this->humidityLabel->Name = L"humidityLabel";
            this->humidityLabel->Size = System::Drawing::Size(163, 64);
            this->humidityLabel->TabIndex = 6;
            this->humidityLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->humidityLabel->Click += gcnew System::EventHandler(this, &Form1::humidityLabel_Click);
            // 
            // pressureLabel
            // 
            this->pressureLabel->BackColor = System::Drawing::Color::Transparent;
            this->pressureLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->pressureLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->pressureLabel->Location = System::Drawing::Point(293, 341);
            this->pressureLabel->Name = L"pressureLabel";
            this->pressureLabel->Size = System::Drawing::Size(189, 64);
            this->pressureLabel->TabIndex = 7;
            this->pressureLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // sunriseLabel
            // 
            this->sunriseLabel->BackColor = System::Drawing::Color::Transparent;
            this->sunriseLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sunriseLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->sunriseLabel->Location = System::Drawing::Point(270, 416);
            this->sunriseLabel->Name = L"sunriseLabel";
            this->sunriseLabel->Size = System::Drawing::Size(176, 64);
            this->sunriseLabel->TabIndex = 8;
            this->sunriseLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // sunsetLabel
            // 
            this->sunsetLabel->BackColor = System::Drawing::Color::Transparent;
            this->sunsetLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sunsetLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->sunsetLabel->Location = System::Drawing::Point(266, 496);
            this->sunsetLabel->Name = L"sunsetLabel";
            this->sunsetLabel->Size = System::Drawing::Size(180, 64);
            this->sunsetLabel->TabIndex = 9;
            this->sunsetLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label3->Location = System::Drawing::Point(88, 266);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(157, 45);
            this->label3->TabIndex = 11;
            this->label3->Text = L"Humidity:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label4->Location = System::Drawing::Point(88, 346);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(147, 45);
            this->label4->TabIndex = 12;
            this->label4->Text = L"Pressure:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label5->Location = System::Drawing::Point(88, 424);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(130, 45);
            this->label5->TabIndex = 13;
            this->label5->Text = L"Sunrise:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label6->Location = System::Drawing::Point(87, 506);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(122, 45);
            this->label6->TabIndex = 14;
            this->label6->Text = L"Sunset:";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(274, 182);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(56, 56);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 15;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(251, 264);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(56, 56);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 16;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(241, 346);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(56, 56);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 17;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(224, 424);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(56, 56);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 18;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(215, 504);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(56, 56);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 19;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(274, 104);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(56, 56);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 20;
            this->pictureBox6->TabStop = false;
            // 
            // day1Label
            // 
            this->day1Label->AutoSize = true;
            this->day1Label->BackColor = System::Drawing::Color::Transparent;
            this->day1Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->day1Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->day1Label->Location = System::Drawing::Point(97, 642);
            this->day1Label->Name = L"day1Label";
            this->day1Label->Size = System::Drawing::Size(0, 45);
            this->day1Label->TabIndex = 21;
            this->day1Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // day1PictureBox
            // 
            this->day1PictureBox->BackColor = System::Drawing::Color::Transparent;
            this->day1PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->day1PictureBox->Location = System::Drawing::Point(131, 741);
            this->day1PictureBox->Name = L"day1PictureBox";
            this->day1PictureBox->Size = System::Drawing::Size(100, 80);
            this->day1PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->day1PictureBox->TabIndex = 22;
            this->day1PictureBox->TabStop = false;
            // 
            // day2PictureBox
            // 
            this->day2PictureBox->BackColor = System::Drawing::Color::Transparent;
            this->day2PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->day2PictureBox->Location = System::Drawing::Point(397, 741);
            this->day2PictureBox->Name = L"day2PictureBox";
            this->day2PictureBox->Size = System::Drawing::Size(100, 80);
            this->day2PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->day2PictureBox->TabIndex = 24;
            this->day2PictureBox->TabStop = false;
            // 
            // day2Label
            // 
            this->day2Label->AutoSize = true;
            this->day2Label->BackColor = System::Drawing::Color::Transparent;
            this->day2Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->day2Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->day2Label->Location = System::Drawing::Point(381, 642);
            this->day2Label->Name = L"day2Label";
            this->day2Label->Size = System::Drawing::Size(0, 45);
            this->day2Label->TabIndex = 23;
            this->day2Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // day3PictureBox
            // 
            this->day3PictureBox->BackColor = System::Drawing::Color::Transparent;
            this->day3PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->day3PictureBox->Location = System::Drawing::Point(670, 741);
            this->day3PictureBox->Name = L"day3PictureBox";
            this->day3PictureBox->Size = System::Drawing::Size(100, 80);
            this->day3PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->day3PictureBox->TabIndex = 26;
            this->day3PictureBox->TabStop = false;
            // 
            // day3Label
            // 
            this->day3Label->AutoSize = true;
            this->day3Label->BackColor = System::Drawing::Color::Transparent;
            this->day3Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->day3Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->day3Label->Location = System::Drawing::Point(662, 642);
            this->day3Label->Name = L"day3Label";
            this->day3Label->Size = System::Drawing::Size(0, 45);
            this->day3Label->TabIndex = 25;
            this->day3Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // day4PictureBox
            // 
            this->day4PictureBox->BackColor = System::Drawing::Color::Transparent;
            this->day4PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->day4PictureBox->Location = System::Drawing::Point(934, 741);
            this->day4PictureBox->Name = L"day4PictureBox";
            this->day4PictureBox->Size = System::Drawing::Size(100, 80);
            this->day4PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->day4PictureBox->TabIndex = 28;
            this->day4PictureBox->TabStop = false;
            // 
            // day4Label
            // 
            this->day4Label->AutoSize = true;
            this->day4Label->BackColor = System::Drawing::Color::Transparent;
            this->day4Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->day4Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->day4Label->Location = System::Drawing::Point(918, 642);
            this->day4Label->Name = L"day4Label";
            this->day4Label->Size = System::Drawing::Size(0, 45);
            this->day4Label->TabIndex = 27;
            this->day4Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // day5PictureBox
            // 
            this->day5PictureBox->BackColor = System::Drawing::Color::Transparent;
            this->day5PictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->day5PictureBox->Location = System::Drawing::Point(1200, 741);
            this->day5PictureBox->Name = L"day5PictureBox";
            this->day5PictureBox->Size = System::Drawing::Size(100, 80);
            this->day5PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->day5PictureBox->TabIndex = 30;
            this->day5PictureBox->TabStop = false;
            // 
            // day5Label
            // 
            this->day5Label->AutoSize = true;
            this->day5Label->BackColor = System::Drawing::Color::Transparent;
            this->day5Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
            this->day5Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->day5Label->Location = System::Drawing::Point(1192, 642);
            this->day5Label->Name = L"day5Label";
            this->day5Label->Size = System::Drawing::Size(0, 45);
            this->day5Label->TabIndex = 29;
            this->day5Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1418, 844);
            this->Controls->Add(this->day5PictureBox);
            this->Controls->Add(this->day5Label);
            this->Controls->Add(this->day4PictureBox);
            this->Controls->Add(this->day4Label);
            this->Controls->Add(this->day3PictureBox);
            this->Controls->Add(this->day3Label);
            this->Controls->Add(this->day2PictureBox);
            this->Controls->Add(this->day2Label);
            this->Controls->Add(this->day1PictureBox);
            this->Controls->Add(this->day1Label);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->sunsetLabel);
            this->Controls->Add(this->sunriseLabel);
            this->Controls->Add(this->pressureLabel);
            this->Controls->Add(this->humidityLabel);
            this->Controls->Add(this->weatherPictureBox);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->windSpeedLabel);
            this->Controls->Add(this->temperatureLabel);
            this->Controls->Add(this->getWeatherButton);
            this->Controls->Add(this->cityTextBox);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->MaximizeBox = false;
            this->Name = L"Form1";
            this->RightToLeftLayout = true;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Weather App";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weatherPictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day1PictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day2PictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day3PictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day4PictureBox))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->day5PictureBox))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }



    private:




        System::Void getWeatherButton_Click(System::Object^ sender, System::EventArgs^ e);




        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
            
             //
             //this part of the code is for rounding the text field
             //

            this->BackColor = System::Drawing::Color::FromArgb(240, 240, 240);

            GraphicsPath^ path = gcnew GraphicsPath();
            path->AddArc(0, 0, 20, 20, 180, 90);
            path->AddArc(cityTextBox->Width - 20, 0, 20, 20, 270, 90);
            path->AddArc(cityTextBox->Width - 20, cityTextBox->Height - 30, 20, 20, 0, 90);
            path->AddArc(0, cityTextBox->Height - 30, 20, 20, 90, 90);
            path->CloseFigure();
            cityTextBox->Region = gcnew System::Drawing::Region(path);



            path = gcnew GraphicsPath();
            path->AddArc(0, 0, 20, 20, 180, 90);
            path->AddArc(getWeatherButton->Width - 20, 0, 20, 20, 270, 90);
            path->AddArc(getWeatherButton->Width - 20, getWeatherButton->Height - 20, 20, 20, 0, 90);
            path->AddArc(0, getWeatherButton->Height - 20, 20, 20, 90, 90);
            path->CloseFigure();
            getWeatherButton->Region = gcnew System::Drawing::Region(path);

            //
            // auto fill-in cities list 
            //

            array<System::String^>^ cities = gcnew array<System::String^> 
            { 
                "Riga", "Moscow", "London", "New York", "Tokyo", "Kiev", "Berlin", "Paris",
                    "Rome", "Madrid", "Amsterdam", "Vienna", "Prague", "Budapest", "Warsaw", "Brussels",
                    "Stockholm", "Helsinki", "Oslo", "Copenhagen", "Lisbon", "Dublin", "Zurich", "Geneva",
                    "Barcelona", "Munich", "Hamburg", "Frankfurt", "Manchester", "Birmingham", "Glasgow", "Liverpool",
                    "Edinburgh", "Cardiff", "Bristol", "Leeds", "Sheffield", "Nottingham", "Leicester", "Coventry",
                    "Rotterdam", "The Hague", "Utrecht", "Eindhoven", "Groningen", "Maastricht", "Luxembourg", "Bratislava",
                    "Sofia", "Bucharest", "Belgrade", "Ljubljana", "Zagreb", "Sarajevo", "Podgorica", "Skopje",
                    "Vilnius", "Riga", "Tallinn", "Saint Petersburg", "Minsk", "Chisinau", "Yerevan", "Tbilisi",
                    "Baku", "Astana", "Almaty", "Bishkek", "Tashkent", "Ashgabat", "Dushanbe", "Islamabad",
                    "Ottawa", "Toronto", "Vancouver", "Montreal", "Calgary", "Edmonton", "Winnipeg", "Quebec City",
                    "Washington D.C.", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego",
                    "Dallas", "San Jose", "Austin", "Jacksonville", "Fort Worth", "Columbus", "Charlotte", "San Francisco",
                    "Indianapolis", "Seattle", "Denver", "Boston", "El Paso", "Detroit", "Nashville", "Portland",
                    "Memphis", "Oklahoma City", "Las Vegas", "Louisville", "Baltimore", "Milwaukee", "Albuquerque", "Tucson",
                    "Fresno", "Sacramento", "Kansas City", "Atlanta", "Miami", "Colorado Springs", "Raleigh", "Omaha",
                    "Richmond", "Minneapolis", "Tulsa", "Arlington", "New Orleans", "Wichita", "Cleveland", "Tampa",
                    "Honolulu", "Aurora", "Anaheim", "Santa Ana", "Corpus Christi", "Riverside", "Lexington", "St. Louis",
                    "Pittsburgh", "Stockton", "Cincinnati", "Anchorage", "Henderson", "Greensboro", "Plano", "Newark",
                    "Lincoln", "Toledo", "Orlando", "Chula Vista", "Irvine", "Fort Wayne", "Jersey City", "Durham",
                    "St. Petersburg", "Laredo", "Buffalo", "Madison", "Lubbock", "Chandler", "Scottsdale", "Reno",
                    "Glendale", "Gilbert", "Winston-Salem", "North Las Vegas", "Norfolk", "Chesapeake", "Garland", "Irving",
                    "Hialeah", "Fremont", "Boise", "Richmond", "Baton Rouge", "Spokane", "Des Moines", "Tacoma",
                    "San Bernardino", "Modesto", "Fontana", "Santa Clarita", "Birmingham", "Oxnard", "Fayetteville", "Moreno Valley",
                    "Rochester", "Glendale", "Huntington Beach", "Salt Lake City", "Grand Rapids", "Amarillo", "Yonkers", "Aurora",
                    "Montgomery", "Akron", "Little Rock", "Huntsville", "Augusta", "Port St. Lucie", "Grand Prairie", "Columbus",
                    "Tallahassee", "Overland Park", "Tempe", "McKinney", "Mobile", "Cape Coral", "Shreveport", "Frisco",
                    "Knoxville", "Worcester", "Brownsville", "Vancouver", "Fort Lauderdale", "Sioux Falls", "Ontario", "Chattanooga",
                    "Providence", "Newport News", "Rancho Cucamonga", "Santa Rosa", "Oceanside", "Salem", "Elk Grove", "Garden Grove",
                    "Pembroke Pines", "Peoria", "Eugene", "Corona", "Cary", "Springfield", "Fort Collins", "Jackson",
                    "Alexandria", "Hayward", "Clarksville", "Lakewood", "Lancaster", "Salinas", "Palmdale", "Hollywood",
                    "Pasadena", "Murfreesboro", "Mesquite", "Killeen", "Savannah", "Hampton", "Torrance", "McAllen",
                    "Syracuse", "Surprise", "Denton", "Roseville", "Thornton", "Miramar", "Pasadena", "Mesa",
                    "Dayton", "Bridgeport", "Daly City", "Escondido", "Naperville", "Bellevue", "Fullerton", "Orange",
                    "Stamford", "Concord", "Santa Clara", "Simi Valley", "Kent", "Lafayette", "Midland", "Carrollton",
                    "Round Rock", "Pompano Beach", "Wilmington", "El Monte", "West Valley City", "Costa Mesa", "Murrieta", "Gresham",
                    "High Point", "Antioch", "Inglewood", "Cambridge", "Temecula", "Waterbury", "Santa Maria", "Manchester",
                    "Norman", "Arvada", "Fargo", "Columbia", "Allentown", "Odessa", "Olathe", "Richardson",
                    "Berkeley", "Round Rock", "Abilene", "Gainesville", "Evansville", "Wichita Falls", "Vallejo", "Sparks",
                    "Lansing", "Ann Arbor", "San Buenaventura", "Tuscaloosa", "Kenosha", "Cedar Rapids", "Visalia", "Beaumont",
                    "Independence", "Springfield", "Peoria", "Provo", "Columbia", "Elgin", "Clearwater", "Westminster",
                    "West Jordan", "Billings", "West Covina", "Everett", "Broken Arrow", "Lakeland", "Palm Bay", "Costa Mesa",
                    "West Palm Beach", "Pueblo", "Lowell", "Gresham", "Pompano Beach", "Manchester", "Palm Coast", "Murrieta",
                    "College Station", "Pearland", "West Jordan", "Temecula", "Clovis", "Springfield", "Simi Valley", "Daly City",
                    "Centennial", "Rialto", "Lakeland", "Santa Maria", "Boulder", "Davenport", "High Point", "Billings",
                    "Richardson", "Pompano Beach", "Broken Arrow", "Pueblo", "West Palm Beach", "Clovis", "Sandy Springs", "Lewisville",
                    "Tyler", "Vacaville", "Bend", "Woodbridge", "San Mateo", "El Cajon", "San Angelo", "Hesperia",
                    "Erie", "Roanoke", "Davie", "League City", "Yuma", "Lawton", "South Bend", "Largo",
                    "Edinburg", "Murfreesboro", "Cambridge", "Vista", "Vacaville", "San Mateo", "Compton", "Brockton",
                    "Dearborn", "Gary", "Santa Monica", "Mission Viejo", "El Cajon", "Livonia", "Roswell", "Salt Lake City",
                    "South Gate", "Carson", "Santa Barbara", "Broomfield", "Bellingham", "Longmont", "Wilmington", "Hemet",
                    "Longview", "Warwick", "Citrus Heights", "Lafayette", "Beaverton", "Fishers", "Rock Hill", "Rapid City",
                    "Las Cruces", "Farmington", "Tustin", "St. George", "Indio", "Iowa City", "Greenville", "Champaign",
                    "Meridian", "Cranston", "Bellingham", "Bend", "Pleasanton", "Lawrence", "Clifton", "Medford",
                    "Boulder", "Norwalk", "Chico", "Fort Smith", "Jurupa Valley", "Newton", "Waukegan", "Warwick",
                    "Mount Vernon", "St. Cloud", "Johns Creek", "Plymouth", "Beaverton", "Tracy", "Pflugerville", "Rockford",
                    "Bismarck", "Tuscaloosa", "Chino", "Newton", "Brockton", "Cranston", "Chino Hills", "Fishers",
                    "San Marcos", "Pleasanton", "Cranston", "Alhambra", "Chino", "Medford", "Tracy", "Manteca",
                    "Loveland", "Baytown", "Upland", "Carmel", "Shawnee", "Danbury", "Whittier", "Bismarck",
                    "San Marcos", "Deltona", "Wichita Falls", "Camden", "Janesville", "Chino Hills", "Chino", "Jacksonville",
                    "Johnson City", "Monroe", "San Leandro", "Springdale", "Suffolk", "Albany", "Springfield", "Lafayette",
                    "Gilroy", "Apple Valley", "Redwood City", "Lynchburg", "Kalamazoo", "Santa Barbara", "Kenosha", "Tulare",
                    "San Marcos", "Dublin", "Cranston", "La Habra", "Goodyear", "Eden Prairie", "Deerfield Beach", "Doral",
                    "Haverhill", "Santa Barbara", "Union City", "Bryan", "Turlock", "Hoover", "Hemet", "Flower Mound",
                    "Missouri City", "Meridian", "Southfield", "Kennewick", "Plymouth", "Farmington Hills", "Madera", "Merced",
                    "San Angelo", "Portsmouth", "Jackson", "Tustin", "Lauderhill", "Flagstaff", "Loveland", "Mountain View",
                    "Hammond", "New Braunfels", "Buena Park", "Largo", "Tinley Park", "Bellflower", "Caldwell", "Buckeye",
                    "Lawrence", "Hawthorne", "North Port", "West Haven", "Brooklyn Park", "Palatine", "Mansfield", "Redmond",
                    "St. Joseph", "Schaumburg", "Harlingen", "Pocatello", "Palm Springs", "Springfield", "South Jordan", "Murray",
                    "Blacksburg", "Rockville", "Coon Rapids", "Jonesboro", "Perris", "Brentwood", "Pharr", "Cleveland",
                    "Lehi", "Covina", "Mount Pleasant", "Dearborn Heights", "Harrisonburg", "Berwyn", "Petaluma", "Troy",
                    "Fountain Valley", "Draper", "Caldwell", "San Luis Obispo", "Euless", "Cathedral City", "Boynton Beach", "St. Peters",
                    "Winter Garden", "Bethlehem", "Lakewood", "San Clemente", "Florence", "Woodbury", "Woodland", "Wylie",
                    "Madera", "Kissimmee", "Lakewood", "Port Arthur", "Oak Lawn", "Pawtucket", "Racine", "Lynwood",
                    "Delray Beach", "Union City", "Jackson", "Harrisonburg", "Decatur", "Santa Barbara", "Greenwood", "Gulfport",
                    "Schenectady", "Great Falls", "Troy", "Burnsville", "Marietta", "Norwalk", "Pico Rivera", "Folsom",
                    "Conroe", "Santee", "Redlands", "Turlock", "Novato", "Tamarac", "Plymouth", "Meriden",
                    "Blue Springs", "Blue Springs", "Portsmouth", "Lake Forest", "North Little Rock", "Milpitas", "Commerce City", "Woodland",
                    "Santa Barbara", "Plymouth", "Manteca", "Burlington", "Santa Cruz", "Hemet", "Lancaster", "Flower Mound",
                    "Springfield", "Lauderhill", "Kenosha", "Springfield", "Georgetown", "Yuba City", "Dublin", "Laguna Niguel" , "Rubizhne" , "Sievierodonetsk",
                    "Lysychans'k"

            };
            this->cityTextBox->AutoCompleteMode = AutoCompleteMode::SuggestAppend;
            this->cityTextBox->AutoCompleteSource = AutoCompleteSource::CustomSource;
            AutoCompleteStringCollection^ cityCollection = gcnew AutoCompleteStringCollection();
            cityCollection->AddRange(cities);
            this->cityTextBox->AutoCompleteCustomSource = cityCollection;




            // text fild settings

            this->cityTextBox->Font = gcnew System::Drawing::Font(L"Segoe UI", 12);
            this->cityTextBox->ForeColor = System::Drawing::Color::FromArgb(50, 50, 50);
            this->cityTextBox->BackColor = System::Drawing::Color::White;

            // button settings

            this->getWeatherButton->Font = gcnew System::Drawing::Font(L"Segoe UI", 12);
            this->getWeatherButton->ForeColor = System::Drawing::Color::White;
            this->getWeatherButton->BackColor = System::Drawing::Color::FromArgb(45, 140, 240);
            this->getWeatherButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->getWeatherButton->FlatAppearance->BorderSize = 0;

            // label with data settings

            this->temperatureLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->temperatureLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);

            this->windSpeedLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->windSpeedLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);

            this->humidityLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->humidityLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);

            this->pressureLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->pressureLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);

            this->sunriseLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->sunriseLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);

            this->sunsetLabel->Font = gcnew System::Drawing::Font(L"Segoe UI", 16);
            this->sunsetLabel->ForeColor = System::Drawing::Color::FromArgb(230, 230, 230);
        }
  


    private: System::Void humidityLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};

}


