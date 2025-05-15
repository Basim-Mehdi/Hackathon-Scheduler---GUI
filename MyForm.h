							// MyForm.h

#pragma once
#include "HelpForm.h"
#include "AboutForm.h"
#include "ManageTeams.h"
namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			ClockTimer->Start(); // For the Clock that I've Used (Timer interval is 1000ms equal to 1 second)
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TitlePanel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Panel^ BasePanel;

	private: System::Windows::Forms::Panel^ NavPanel;
	private: System::Windows::Forms::Panel^ UpcomingSchedulePanel;



	private: System::Windows::Forms::Panel^ MainLogoPanel;

	private: System::Windows::Forms::PictureBox^ MainLogoPictureBox;

	private: System::Windows::Forms::Label^ lblSubtitle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::Button^ btnHelp;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ btnManageTeams;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ AboutPictureBox;

	private: System::Windows::Forms::Label^ ClockLabel;



	private:
		bool isOpen = false;  // Boolean to check if the navbar is open or closed
		int panelWidth = 303; // Width of the panel when fully open
		int panelCollapsedWidth = 45; // Width of the panel when collapsed
		int step = 7; // Step to change the width on each timer tick

	private: System::Windows::Forms::Timer^ slideTimer;
	private: System::Windows::Forms::Button^ ButtonSide;
	private: System::Windows::Forms::Timer^ ClockTimer;
	private: System::Windows::Forms::Label^ DataLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ Minimize_PictureBox;


	private: System::ComponentModel::IContainer^ components; 

		   /// <summary>
		   /// Required designer variable. 
		   /// </summary>

		   
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   System::Windows::Forms::ListViewGroup^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			   System::Windows::Forms::ListViewGroup^ listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			   this->TitlePanel = (gcnew System::Windows::Forms::Panel());
			   this->Minimize_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			   this->ClockLabel = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->lblSubtitle = (gcnew System::Windows::Forms::Label());
			   this->lblTitle = (gcnew System::Windows::Forms::Label());
			   this->DataLabel = (gcnew System::Windows::Forms::Label());
			   this->BasePanel = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->NavPanel = (gcnew System::Windows::Forms::Panel());
			   this->AboutPictureBox = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnAbout = (gcnew System::Windows::Forms::Button());
			   this->btnHelp = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->btnManageTeams = (gcnew System::Windows::Forms::Button());
			   this->ButtonSide = (gcnew System::Windows::Forms::Button());
			   this->UpcomingSchedulePanel = (gcnew System::Windows::Forms::Panel());
			   this->MainLogoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			   this->listView1 = (gcnew System::Windows::Forms::ListView());
			   this->MainLogoPanel = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->slideTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->ClockTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->TitlePanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->BasePanel->SuspendLayout();
			   this->NavPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutPictureBox))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->UpcomingSchedulePanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainLogoPictureBox))->BeginInit();
			   this->MainLogoPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // TitlePanel
			   // 
			   this->TitlePanel->BackColor = System::Drawing::Color::White;
			   this->TitlePanel->Controls->Add(this->Minimize_PictureBox);
			   this->TitlePanel->Controls->Add(this->pictureBox9);
			   this->TitlePanel->Controls->Add(this->ClockLabel);
			   this->TitlePanel->Controls->Add(this->pictureBox3);
			   this->TitlePanel->Controls->Add(this->lblSubtitle);
			   this->TitlePanel->Controls->Add(this->lblTitle);
			   this->TitlePanel->Dock = System::Windows::Forms::DockStyle::Top;
			   this->TitlePanel->Location = System::Drawing::Point(0, 0);
			   this->TitlePanel->Name = L"TitlePanel";
			   this->TitlePanel->Size = System::Drawing::Size(1228, 133);
			   this->TitlePanel->TabIndex = 0;
			   this->TitlePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::TitlePanel_Paint);
			   // 
			   // Minimize_PictureBox
			   // 
			   this->Minimize_PictureBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->Minimize_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize_PictureBox.Image")));
			   this->Minimize_PictureBox->Location = System::Drawing::Point(1104, 0);
			   this->Minimize_PictureBox->Name = L"Minimize_PictureBox";
			   this->Minimize_PictureBox->Size = System::Drawing::Size(65, 65);
			   this->Minimize_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->Minimize_PictureBox->TabIndex = 6;
			   this->Minimize_PictureBox->TabStop = false;
			   this->Minimize_PictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			   // 
			   // pictureBox9
			   // 
			   this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			   this->pictureBox9->Location = System::Drawing::Point(0, 0);
			   this->pictureBox9->Name = L"pictureBox9";
			   this->pictureBox9->Size = System::Drawing::Size(101, 133);
			   this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox9->TabIndex = 5;
			   this->pictureBox9->TabStop = false;
			   // 
			   // ClockLabel
			   // 
			   this->ClockLabel->AutoSize = true;
			   this->ClockLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->ClockLabel->ForeColor = System::Drawing::Color::Black;
			   this->ClockLabel->Location = System::Drawing::Point(98, 74);
			   this->ClockLabel->Name = L"ClockLabel";
			   this->ClockLabel->Size = System::Drawing::Size(87, 38);
			   this->ClockLabel->TabIndex = 4;
			   this->ClockLabel->Text = L"Clock";
			   this->ClockLabel->Click += gcnew System::EventHandler(this, &MyForm::ClockLabel_Click);
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(1165, 0);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(63, 65);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 3;
			   this->pictureBox3->TabStop = false;
			   this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			   // 
			   // lblSubtitle
			   // 
			   this->lblSubtitle->AutoSize = true;
			   this->lblSubtitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblSubtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->lblSubtitle->Location = System::Drawing::Point(294, 65);
			   this->lblSubtitle->Name = L"lblSubtitle";
			   this->lblSubtitle->Size = System::Drawing::Size(714, 36);
			   this->lblSubtitle->TabIndex = 2;
			   this->lblSubtitle->Text = L"Effortlessly schedule and manage head-to-head matches!";
			   this->lblSubtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // lblTitle
			   // 
			   this->lblTitle->AutoSize = true;
			   this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTitle->ForeColor = System::Drawing::Color::Black;
			   this->lblTitle->Location = System::Drawing::Point(219, 0);
			   this->lblTitle->Name = L"lblTitle";
			   this->lblTitle->Size = System::Drawing::Size(879, 65);
			   this->lblTitle->TabIndex = 1;
			   this->lblTitle->Text = L"Welcome to the Hackathon Scheduler";
			   this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // DataLabel
			   // 
			   this->DataLabel->AutoSize = true;
			   this->DataLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->DataLabel->ForeColor = System::Drawing::Color::Black;
			   this->DataLabel->Location = System::Drawing::Point(21, 17);
			   this->DataLabel->Name = L"DataLabel";
			   this->DataLabel->Size = System::Drawing::Size(55, 28);
			   this->DataLabel->TabIndex = 5;
			   this->DataLabel->Text = L"Date";
			   // 
			   // BasePanel
			   // 
			   this->BasePanel->BackColor = System::Drawing::Color::White;
			   this->BasePanel->Controls->Add(this->label1);
			   this->BasePanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->BasePanel->Location = System::Drawing::Point(0, 676);
			   this->BasePanel->Name = L"BasePanel";
			   this->BasePanel->Size = System::Drawing::Size(1228, 73);
			   this->BasePanel->TabIndex = 1;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->label1->Location = System::Drawing::Point(0, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(1195, 45);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"--------------- Developed for Hackathon Enthusiasts | Version 1.0 ---------------"
				   L"-";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			   // 
			   // NavPanel
			   // 
			   this->NavPanel->BackColor = System::Drawing::Color::White;
			   this->NavPanel->Controls->Add(this->AboutPictureBox);
			   this->NavPanel->Controls->Add(this->pictureBox7);
			   this->NavPanel->Controls->Add(this->pictureBox6);
			   this->NavPanel->Controls->Add(this->pictureBox5);
			   this->NavPanel->Controls->Add(this->pictureBox4);
			   this->NavPanel->Controls->Add(this->pictureBox2);
			   this->NavPanel->Controls->Add(this->btnAbout);
			   this->NavPanel->Controls->Add(this->btnHelp);
			   this->NavPanel->Controls->Add(this->button4);
			   this->NavPanel->Controls->Add(this->button3);
			   this->NavPanel->Controls->Add(this->btnManageTeams);
			   this->NavPanel->Controls->Add(this->ButtonSide);
			   this->NavPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->NavPanel->Location = System::Drawing::Point(0, 133);
			   this->NavPanel->Name = L"NavPanel";
			   this->NavPanel->Size = System::Drawing::Size(71, 543);
			   this->NavPanel->TabIndex = 2;
			   // 
			   // AboutPictureBox
			   // 
			   this->AboutPictureBox->BackColor = System::Drawing::Color::Transparent;
			   this->AboutPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AboutPictureBox.Image")));
			   this->AboutPictureBox->Location = System::Drawing::Point(363, 346);
			   this->AboutPictureBox->Name = L"AboutPictureBox";
			   this->AboutPictureBox->Size = System::Drawing::Size(79, 70);
			   this->AboutPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->AboutPictureBox->TabIndex = 22;
			   this->AboutPictureBox->TabStop = false;
			   this->AboutPictureBox->Click += gcnew System::EventHandler(this, &MyForm::AboutPictureBox_Click);
			   this->AboutPictureBox->MouseLeave += gcnew System::EventHandler(this, &MyForm::AboutPictureBox_MouseLeave);
			   // 
			   // pictureBox7
			   // 
			   this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			   this->pictureBox7->Location = System::Drawing::Point(360, 266);
			   this->pictureBox7->Name = L"pictureBox7";
			   this->pictureBox7->Size = System::Drawing::Size(79, 56);
			   this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox7->TabIndex = 21;
			   this->pictureBox7->TabStop = false;
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(363, 176);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(79, 70);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox6->TabIndex = 20;
			   this->pictureBox6->TabStop = false;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(368, 91);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(79, 70);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 19;
			   this->pictureBox5->TabStop = false;
			   this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(363, 6);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(79, 70);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 18;
			   this->pictureBox4->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::White;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(147, 422);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(129, 115);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 4;
			   this->pictureBox2->TabStop = false;
			   // 
			   // btnAbout
			   // 
			   this->btnAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnAbout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnAbout->ForeColor = System::Drawing::Color::White;
			   this->btnAbout->Location = System::Drawing::Point(72, 346);
			   this->btnAbout->Name = L"btnAbout";
			   this->btnAbout->Size = System::Drawing::Size(286, 70);
			   this->btnAbout->TabIndex = 17;
			   this->btnAbout->Text = L"About";
			   this->btnAbout->UseVisualStyleBackColor = false;
			   this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			   this->btnAbout->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnAbout_MouseEnter);
			   // 
			   // btnHelp
			   // 
			   this->btnHelp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->btnHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnHelp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnHelp->ForeColor = System::Drawing::Color::White;
			   this->btnHelp->Location = System::Drawing::Point(71, 261);
			   this->btnHelp->Name = L"btnHelp";
			   this->btnHelp->Size = System::Drawing::Size(286, 70);
			   this->btnHelp->TabIndex = 16;
			   this->btnHelp->Text = L"Help";
			   this->btnHelp->UseVisualStyleBackColor = false;
			   this->btnHelp->Click += gcnew System::EventHandler(this, &MyForm::btnHelp_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->ForeColor = System::Drawing::Color::White;
			   this->button4->Location = System::Drawing::Point(71, 176);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(286, 70);
			   this->button4->TabIndex = 15;
			   this->button4->Text = L"Tournament Progress";
			   this->button4->UseVisualStyleBackColor = false;
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->ForeColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(72, 91);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(286, 70);
			   this->button3->TabIndex = 14;
			   this->button3->Text = L"View Results";
			   this->button3->UseVisualStyleBackColor = false;
			   // 
			   // btnManageTeams
			   // 
			   this->btnManageTeams->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->btnManageTeams->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnManageTeams->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnManageTeams->ForeColor = System::Drawing::Color::White;
			   this->btnManageTeams->Location = System::Drawing::Point(72, 6);
			   this->btnManageTeams->Name = L"btnManageTeams";
			   this->btnManageTeams->Size = System::Drawing::Size(286, 70);
			   this->btnManageTeams->TabIndex = 12;
			   this->btnManageTeams->Text = L"Manage Teams";
			   this->btnManageTeams->UseVisualStyleBackColor = false;
			   this->btnManageTeams->Click += gcnew System::EventHandler(this, &MyForm::btnManageTeams_Click);
			   // 
			   // ButtonSide
			   // 
			   this->ButtonSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->ButtonSide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->ButtonSide->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ButtonSide->ForeColor = System::Drawing::Color::White;
			   this->ButtonSide->Location = System::Drawing::Point(0, 6);
			   this->ButtonSide->Name = L"ButtonSide";
			   this->ButtonSide->Size = System::Drawing::Size(66, 410);
			   this->ButtonSide->TabIndex = 11;
			   this->ButtonSide->Text = L"☰";
			   this->ButtonSide->UseVisualStyleBackColor = false;
			   this->ButtonSide->Click += gcnew System::EventHandler(this, &MyForm::ButtonSide_Click);
			   this->ButtonSide->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ButtonSide_MouseClick);
			   // 
			   // UpcomingSchedulePanel
			   // 
			   this->UpcomingSchedulePanel->BackColor = System::Drawing::Color::White;
			   this->UpcomingSchedulePanel->Controls->Add(this->DataLabel);
			   this->UpcomingSchedulePanel->Controls->Add(this->MainLogoPictureBox);
			   this->UpcomingSchedulePanel->Controls->Add(this->listView1);
			   this->UpcomingSchedulePanel->Dock = System::Windows::Forms::DockStyle::Right;
			   this->UpcomingSchedulePanel->Location = System::Drawing::Point(916, 133);
			   this->UpcomingSchedulePanel->Name = L"UpcomingSchedulePanel";
			   this->UpcomingSchedulePanel->Size = System::Drawing::Size(312, 543);
			   this->UpcomingSchedulePanel->TabIndex = 3;
			   // 
			   // MainLogoPictureBox
			   // 
			   this->MainLogoPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainLogoPictureBox.Image")));
			   this->MainLogoPictureBox->InitialImage = nullptr;
			   this->MainLogoPictureBox->Location = System::Drawing::Point(41, 359);
			   this->MainLogoPictureBox->Name = L"MainLogoPictureBox";
			   this->MainLogoPictureBox->Size = System::Drawing::Size(246, 142);
			   this->MainLogoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->MainLogoPictureBox->TabIndex = 3;
			   this->MainLogoPictureBox->TabStop = false;
			   this->MainLogoPictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			   // 
			   // listView1
			   // 
			   this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->listView1->ForeColor = System::Drawing::Color::White;
			   listViewGroup1->Header = L"ListViewGroup";
			   listViewGroup1->Name = L"listViewGroup1";
			   listViewGroup2->Header = L"ListViewGroup";
			   listViewGroup2->Name = L"listViewGroup2";
			   this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(2) { listViewGroup1, listViewGroup2 });
			   this->listView1->HideSelection = false;
			   this->listView1->Location = System::Drawing::Point(26, 60);
			   this->listView1->Name = L"listView1";
			   this->listView1->Size = System::Drawing::Size(261, 281);
			   this->listView1->TabIndex = 0;
			   this->listView1->UseCompatibleStateImageBehavior = false;
			   // 
			   // MainLogoPanel
			   // 
			   this->MainLogoPanel->BackColor = System::Drawing::Color::White;
			   this->MainLogoPanel->Controls->Add(this->pictureBox1);
			   this->MainLogoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->MainLogoPanel->Location = System::Drawing::Point(71, 133);
			   this->MainLogoPanel->Name = L"MainLogoPanel";
			   this->MainLogoPanel->Size = System::Drawing::Size(845, 543);
			   this->MainLogoPanel->TabIndex = 5;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(845, 543);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 6;
			   this->pictureBox1->TabStop = false;
			   // 
			   // slideTimer
			   // 
			   this->slideTimer->Interval = 8;
			   this->slideTimer->Tick += gcnew System::EventHandler(this, &MyForm::slideTimer_Tick);
			   // 
			   // ClockTimer
			   // 
			   this->ClockTimer->Interval = 1000;
			   this->ClockTimer->Tick += gcnew System::EventHandler(this, &MyForm::ClockTimer_Tick);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->ClientSize = System::Drawing::Size(1228, 749);
			   this->Controls->Add(this->MainLogoPanel);
			   this->Controls->Add(this->UpcomingSchedulePanel);
			   this->Controls->Add(this->NavPanel);
			   this->Controls->Add(this->BasePanel);
			   this->Controls->Add(this->TitlePanel);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Hackathon Scheduler";
			   this->TitlePanel->ResumeLayout(false);
			   this->TitlePanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->BasePanel->ResumeLayout(false);
			   this->BasePanel->PerformLayout();
			   this->NavPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutPictureBox))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->UpcomingSchedulePanel->ResumeLayout(false);
			   this->UpcomingSchedulePanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainLogoPictureBox))->EndInit();
			   this->MainLogoPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Display a warning dialog to the user
		System::Windows::Forms::DialogResult result = MessageBox::Show("You will lose all your progress if you close. Are you sure you want to close?",
			"Warning - Unsaved Changes",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// Check the user's response
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();  // Close the form if the user clicked "Yes"
		}
		// If the user clicked "No", the form will remain open
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if the HelpForm is already open
		for each (Form ^ openForm in Application::OpenForms)
		{
			if (dynamic_cast<HelpForm^>(openForm)) {
				// If HelpForm is already open, show a message and return
				MessageBox::Show("Help form is already open.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return; // Exit the method, don't open a new instance
			}
		}

		// If HelpForm is not open, instantiate and show it
		HelpForm^ form = gcnew HelpForm();
		form->Show();
	}
	private: System::Void ButtonSide_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if the navbar is already at the desired position
		if (isOpen)
		{
			// If the navbar is open, start collapsing it only if it's not already collapsed
			if (NavPanel->Width > panelCollapsedWidth)
			{
				slideTimer->Start();
			}
		}
		else
		{
			// If the navbar is collapsed, start expanding it only if it's not already expanded
			if (NavPanel->Width < panelWidth)
			{
				slideTimer->Start();
			}
		}
	}

	private: System::Void slideTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (isOpen)
		{
			// If the navbar is open, decrease the width to collapse it
			if (NavPanel->Width > panelCollapsedWidth)
			{
				NavPanel->Width -= step; // Decrease width to collapse smoothly
			}
			else
			{
				slideTimer->Stop(); // Stop the timer when the panel reaches the collapsed width
				isOpen = false; // Mark the navbar as collapsed
			}
		}
		else
		{
			// If the navbar is collapsed, increase the width to expand it
			if (NavPanel->Width < panelWidth)
			{
				NavPanel->Width += step; // Increase width to expand smoothly
			}
			else
			{
				slideTimer->Stop(); // Stop the timer when the panel reaches the expanded width
				isOpen = true; // Mark the navbar as open
			}
		}
	}
	private: System::Void ButtonSide_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void ClockTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Update the ClockLabel text with the current time
		ClockLabel->Text = DateTime::Now.ToString("hh:mm:ss tt"); 	// Format the time as HH:mm:ss
		DataLabel->Text = DateTime::Now.ToString("dddd, MMMM dd, yyyy");

	}
private: System::Void ClockLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if the AboutForm is already open
	for each (Form ^ openForm in Application::OpenForms)
	{
		if (dynamic_cast<AboutForm^>(openForm)) {
			// If AboutForm is already open, show a message and return
			MessageBox::Show("About form is already open.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return; // Exit the method, don't open a new instance
		}
	}
	AboutForm^ Obj = gcnew AboutForm();
	Obj->Show();
}
private: System::Void TitlePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void AboutPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAbout_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void AboutPictureBox_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void PictureTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnManageTeams_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if the ManageTeamsForm is already open
	for each (Form ^ openForm in Application::OpenForms)
	{
		if (dynamic_cast<ManageTeams^>(openForm)) {
			// If ManageTeamsForm is already open, show a message and return
			MessageBox::Show("Manage Teams form is already open.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return; // Exit the method, don't open a new instance
		}
	}

	// If ManageTeamsForm is not open, instantiate and show it
	ManageTeams^ form = gcnew ManageTeams();
	form->Show();
}
};
	}
