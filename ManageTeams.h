#pragma once

namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManageTeams
	/// </summary>
	public ref class ManageTeams : public System::Windows::Forms::Form
	{
	public:
		ManageTeams(void)
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
		~ManageTeams()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Label_Panel;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Panel^ NavPanel;

	private: System::Windows::Forms::Panel^ BottomPanel;
	private: System::Windows::Forms::Button^ btnBack;


	private: System::Windows::Forms::Button^ btnLoadTeams;

	private: System::Windows::Forms::Button^ btnDeleteTeam;

	private: System::Windows::Forms::Button^ btnEditTeam;

	private: System::Windows::Forms::Button^ btnAddTeam;

	private: System::Windows::Forms::Button^ ButtonSide;
	private: System::Windows::Forms::PictureBox^ GifPictureBox;
	private: System::Windows::Forms::Label^ lblStatus;

	private: System::Windows::Forms::Label^ lblSubtitle;
	private: System::Windows::Forms::Label^ ClockLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ Minimize_PictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Timer^ slideTimer;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		bool isOpen = false;  // Boolean to check if the navbar is open or closed
		int panelWidth = 303; // Width of the panel when fully open
		int panelCollapsedWidth = 45; // Width of the panel when collapsed
		int step = 7; // Step to change the width on each timer tick

	private: System::Windows::Forms::Timer^ ClockTimer;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnl2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ pnl1;
	private: System::Windows::Forms::Panel^ pnl16;


	private: System::Windows::Forms::Panel^ pnl15;

	private: System::Windows::Forms::Panel^ pnl14;

	private: System::Windows::Forms::Panel^ pnl13;

	private: System::Windows::Forms::Panel^ pnl12;

	private: System::Windows::Forms::Panel^ pnl11;

	private: System::Windows::Forms::Panel^ pnl10;

	private: System::Windows::Forms::Panel^ pnl9;

	private: System::Windows::Forms::Panel^ pnl8;

	private: System::Windows::Forms::Panel^ pnl7;

	private: System::Windows::Forms::Panel^ pnl6;

	private: System::Windows::Forms::Panel^ pnl5;

	private: System::Windows::Forms::Panel^ pnl4;

	private: System::Windows::Forms::Panel^ pnl3;
	private: System::Windows::Forms::Label^ lblName1;
	private: System::Windows::Forms::Label^ lblName16;


	private: System::Windows::Forms::Label^ lblName15;

	private: System::Windows::Forms::Label^ lblName14;

	private: System::Windows::Forms::Label^ lblName13;

private: System::Windows::Forms::Label^ lblName12;

private: System::Windows::Forms::Label^ lblName11;

private: System::Windows::Forms::Label^ lblName10;

private: System::Windows::Forms::Label^ lblName9;

private: System::Windows::Forms::Label^ lblName8;

private: System::Windows::Forms::Label^ lblName7;

private: System::Windows::Forms::Label^ lblName6;

private: System::Windows::Forms::Label^ lblName5;

private: System::Windows::Forms::Label^ lblName4;

private: System::Windows::Forms::Label^ lblName3;

private: System::Windows::Forms::Label^ lblName2;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ flip1;
private: System::Windows::Forms::PictureBox^ flip16;


private: System::Windows::Forms::PictureBox^ flip15;

private: System::Windows::Forms::PictureBox^ flip14;

private: System::Windows::Forms::PictureBox^ flip13;

private: System::Windows::Forms::PictureBox^ flip12;

private: System::Windows::Forms::PictureBox^ flip11;

private: System::Windows::Forms::PictureBox^ flip10;

private: System::Windows::Forms::PictureBox^ flip9;

private: System::Windows::Forms::PictureBox^ flip8;

private: System::Windows::Forms::PictureBox^ flip7;

private: System::Windows::Forms::PictureBox^ flip6;

private: System::Windows::Forms::PictureBox^ flip5;

private: System::Windows::Forms::PictureBox^ flip4;

private: System::Windows::Forms::PictureBox^ flip3;

private: System::Windows::Forms::Label^ DateLabel;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ lblMembers1;
private: System::Windows::Forms::Label^ lblMembers16;

private: System::Windows::Forms::RichTextBox^ richTextBox16;
private: System::Windows::Forms::Label^ lblMembers15;

private: System::Windows::Forms::RichTextBox^ richTextBox15;
private: System::Windows::Forms::Label^ lblMembers14;

private: System::Windows::Forms::RichTextBox^ richTextBox14;
private: System::Windows::Forms::Label^ lblMembers13;

private: System::Windows::Forms::RichTextBox^ richTextBox13;
private: System::Windows::Forms::Label^ lblMembers12;

private: System::Windows::Forms::RichTextBox^ richTextBox12;
private: System::Windows::Forms::Label^ lblMembers11;

private: System::Windows::Forms::RichTextBox^ richTextBox11;
private: System::Windows::Forms::Label^ lblMembers10;

private: System::Windows::Forms::RichTextBox^ richTextBox10;
private: System::Windows::Forms::Label^ lblMembers9;

private: System::Windows::Forms::RichTextBox^ richTextBox9;
private: System::Windows::Forms::Label^ lblMembers8;

private: System::Windows::Forms::RichTextBox^ richTextBox8;
private: System::Windows::Forms::Label^ lblMembers7;

private: System::Windows::Forms::RichTextBox^ richTextBox7;
private: System::Windows::Forms::Label^ lblMembers6;

private: System::Windows::Forms::RichTextBox^ richTextBox6;
private: System::Windows::Forms::Label^ lblMembers5;

private: System::Windows::Forms::RichTextBox^ richTextBox5;
private: System::Windows::Forms::Label^ lblMembers4;

private: System::Windows::Forms::RichTextBox^ richTextBox4;
private: System::Windows::Forms::Label^ lblMembers3;

private: System::Windows::Forms::RichTextBox^ richTextBox3;
private: System::Windows::Forms::Label^ lblMembers2;

private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::PictureBox^ flipAll;
private: System::Windows::Forms::Label^ label17;


private: System::Windows::Forms::PictureBox^ flip2;


















		 
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageTeams::typeid));
			this->Label_Panel = (gcnew System::Windows::Forms::Panel());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Minimize_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->ClockLabel = (gcnew System::Windows::Forms::Label());
			this->lblSubtitle = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->flipAll = (gcnew System::Windows::Forms::PictureBox());
			this->NavPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnLoadTeams = (gcnew System::Windows::Forms::Button());
			this->btnDeleteTeam = (gcnew System::Windows::Forms::Button());
			this->btnEditTeam = (gcnew System::Windows::Forms::Button());
			this->btnAddTeam = (gcnew System::Windows::Forms::Button());
			this->ButtonSide = (gcnew System::Windows::Forms::Button());
			this->GifPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->BottomPanel = (gcnew System::Windows::Forms::Panel());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->slideTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ClockTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl16 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers16 = (gcnew System::Windows::Forms::Label());
			this->richTextBox16 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip16 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lblName16 = (gcnew System::Windows::Forms::Label());
			this->pnl15 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers15 = (gcnew System::Windows::Forms::Label());
			this->richTextBox15 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip15 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lblName15 = (gcnew System::Windows::Forms::Label());
			this->pnl14 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers14 = (gcnew System::Windows::Forms::Label());
			this->richTextBox14 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip14 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lblName14 = (gcnew System::Windows::Forms::Label());
			this->pnl13 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers13 = (gcnew System::Windows::Forms::Label());
			this->richTextBox13 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip13 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblName13 = (gcnew System::Windows::Forms::Label());
			this->pnl12 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers12 = (gcnew System::Windows::Forms::Label());
			this->richTextBox12 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip12 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblName12 = (gcnew System::Windows::Forms::Label());
			this->pnl11 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers11 = (gcnew System::Windows::Forms::Label());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip11 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblName11 = (gcnew System::Windows::Forms::Label());
			this->pnl10 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers10 = (gcnew System::Windows::Forms::Label());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip10 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblName10 = (gcnew System::Windows::Forms::Label());
			this->pnl9 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblName9 = (gcnew System::Windows::Forms::Label());
			this->pnl8 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblName8 = (gcnew System::Windows::Forms::Label());
			this->pnl7 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblName7 = (gcnew System::Windows::Forms::Label());
			this->pnl6 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblName6 = (gcnew System::Windows::Forms::Label());
			this->pnl5 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblName5 = (gcnew System::Windows::Forms::Label());
			this->pnl4 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblName4 = (gcnew System::Windows::Forms::Label());
			this->pnl3 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblName3 = (gcnew System::Windows::Forms::Label());
			this->pnl2 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblName2 = (gcnew System::Windows::Forms::Label());
			this->pnl1 = (gcnew System::Windows::Forms::Panel());
			this->lblMembers1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->flip1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblName1 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Label_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flipAll))->BeginInit();
			this->NavPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GifPictureBox))->BeginInit();
			this->BottomPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnl16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip16))->BeginInit();
			this->pnl15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip15))->BeginInit();
			this->pnl14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip14))->BeginInit();
			this->pnl13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip13))->BeginInit();
			this->pnl12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip12))->BeginInit();
			this->pnl11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip11))->BeginInit();
			this->pnl10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip10))->BeginInit();
			this->pnl9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip9))->BeginInit();
			this->pnl8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip8))->BeginInit();
			this->pnl7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip7))->BeginInit();
			this->pnl6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip6))->BeginInit();
			this->pnl5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip5))->BeginInit();
			this->pnl4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip4))->BeginInit();
			this->pnl3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip3))->BeginInit();
			this->pnl2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip2))->BeginInit();
			this->pnl1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip1))->BeginInit();
			this->SuspendLayout();
			// 
			// Label_Panel
			// 
			this->Label_Panel->BackColor = System::Drawing::Color::Snow;
			this->Label_Panel->Controls->Add(this->DateLabel);
			this->Label_Panel->Controls->Add(this->panel4);
			this->Label_Panel->Controls->Add(this->Minimize_PictureBox);
			this->Label_Panel->Controls->Add(this->pictureBox3);
			this->Label_Panel->Controls->Add(this->pictureBox9);
			this->Label_Panel->Controls->Add(this->ClockLabel);
			this->Label_Panel->Controls->Add(this->lblSubtitle);
			this->Label_Panel->Controls->Add(this->lblTitle);
			this->Label_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Label_Panel->Location = System::Drawing::Point(0, 0);
			this->Label_Panel->Name = L"Label_Panel";
			this->Label_Panel->Size = System::Drawing::Size(1258, 120);
			this->Label_Panel->TabIndex = 0;
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateLabel->ForeColor = System::Drawing::Color::Black;
			this->DateLabel->Location = System::Drawing::Point(99, 0);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(64, 32);
			this->DateLabel->TabIndex = 9;
			this->DateLabel->Text = L"Date";
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(976, 133);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(181, 123);
			this->panel4->TabIndex = 1;
			// 
			// Minimize_PictureBox
			// 
			this->Minimize_PictureBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Minimize_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize_PictureBox.Image")));
			this->Minimize_PictureBox->Location = System::Drawing::Point(1105, 0);
			this->Minimize_PictureBox->Name = L"Minimize_PictureBox";
			this->Minimize_PictureBox->Size = System::Drawing::Size(65, 65);
			this->Minimize_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Minimize_PictureBox->TabIndex = 8;
			this->Minimize_PictureBox->TabStop = false;
			this->Minimize_PictureBox->Click += gcnew System::EventHandler(this, &ManageTeams::Minimize_PictureBox_Click);
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
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ManageTeams::pictureBox3_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(101, 120);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 6;
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
			this->ClockLabel->TabIndex = 5;
			this->ClockLabel->Text = L"Clock";
			this->ClockLabel->Click += gcnew System::EventHandler(this, &ManageTeams::ClockLabel_Click);
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
			this->lblSubtitle->Size = System::Drawing::Size(800, 36);
			this->lblSubtitle->TabIndex = 3;
			this->lblSubtitle->Text = L"Handle team data: Add, edit, delete, load, and display team info.";
			this->lblSubtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblSubtitle->Click += gcnew System::EventHandler(this, &ManageTeams::lblSubtitle_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblTitle->Location = System::Drawing::Point(429, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(365, 65);
			this->lblTitle->TabIndex = 2;
			this->lblTitle->Text = L"Manage Teams";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flipAll
			// 
			this->flipAll->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flipAll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flipAll.Image")));
			this->flipAll->Location = System::Drawing::Point(383, 625);
			this->flipAll->Name = L"flipAll";
			this->flipAll->Size = System::Drawing::Size(63, 61);
			this->flipAll->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flipAll->TabIndex = 4;
			this->flipAll->TabStop = false;
			this->flipAll->Click += gcnew System::EventHandler(this, &ManageTeams::flipAll_Click);
			// 
			// NavPanel
			// 
			this->NavPanel->Controls->Add(this->pictureBox6);
			this->NavPanel->Controls->Add(this->pictureBox5);
			this->NavPanel->Controls->Add(this->pictureBox2);
			this->NavPanel->Controls->Add(this->pictureBox1);
			this->NavPanel->Controls->Add(this->pictureBox4);
			this->NavPanel->Controls->Add(this->btnBack);
			this->NavPanel->Controls->Add(this->btnLoadTeams);
			this->NavPanel->Controls->Add(this->btnDeleteTeam);
			this->NavPanel->Controls->Add(this->btnEditTeam);
			this->NavPanel->Controls->Add(this->btnAddTeam);
			this->NavPanel->Controls->Add(this->ButtonSide);
			this->NavPanel->Location = System::Drawing::Point(0, 139);
			this->NavPanel->Name = L"NavPanel";
			this->NavPanel->Size = System::Drawing::Size(450, 426);
			this->NavPanel->TabIndex = 1;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(371, 343);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(79, 70);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(371, 258);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(79, 70);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(371, 173);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(79, 70);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(368, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(79, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(367, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(79, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::White;
			this->btnBack->Location = System::Drawing::Point(75, 343);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(286, 70);
			this->btnBack->TabIndex = 23;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &ManageTeams::btnBack_Click);
			// 
			// btnLoadTeams
			// 
			this->btnLoadTeams->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnLoadTeams->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLoadTeams->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadTeams->ForeColor = System::Drawing::Color::White;
			this->btnLoadTeams->Location = System::Drawing::Point(74, 258);
			this->btnLoadTeams->Name = L"btnLoadTeams";
			this->btnLoadTeams->Size = System::Drawing::Size(286, 70);
			this->btnLoadTeams->TabIndex = 22;
			this->btnLoadTeams->Text = L"Load Teams";
			this->btnLoadTeams->UseVisualStyleBackColor = false;
			// 
			// btnDeleteTeam
			// 
			this->btnDeleteTeam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnDeleteTeam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteTeam->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteTeam->ForeColor = System::Drawing::Color::White;
			this->btnDeleteTeam->Location = System::Drawing::Point(74, 173);
			this->btnDeleteTeam->Name = L"btnDeleteTeam";
			this->btnDeleteTeam->Size = System::Drawing::Size(286, 70);
			this->btnDeleteTeam->TabIndex = 21;
			this->btnDeleteTeam->Text = L"Delete Team";
			this->btnDeleteTeam->UseVisualStyleBackColor = false;
			// 
			// btnEditTeam
			// 
			this->btnEditTeam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnEditTeam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditTeam->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditTeam->ForeColor = System::Drawing::Color::White;
			this->btnEditTeam->Location = System::Drawing::Point(75, 88);
			this->btnEditTeam->Name = L"btnEditTeam";
			this->btnEditTeam->Size = System::Drawing::Size(286, 70);
			this->btnEditTeam->TabIndex = 20;
			this->btnEditTeam->Text = L"Edit Team";
			this->btnEditTeam->UseVisualStyleBackColor = false;
			// 
			// btnAddTeam
			// 
			this->btnAddTeam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnAddTeam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddTeam->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddTeam->ForeColor = System::Drawing::Color::White;
			this->btnAddTeam->Location = System::Drawing::Point(75, 3);
			this->btnAddTeam->Name = L"btnAddTeam";
			this->btnAddTeam->Size = System::Drawing::Size(286, 70);
			this->btnAddTeam->TabIndex = 19;
			this->btnAddTeam->Text = L"Add Team";
			this->btnAddTeam->UseVisualStyleBackColor = false;
			// 
			// ButtonSide
			// 
			this->ButtonSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ButtonSide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonSide->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonSide->ForeColor = System::Drawing::Color::White;
			this->ButtonSide->Location = System::Drawing::Point(3, 3);
			this->ButtonSide->Name = L"ButtonSide";
			this->ButtonSide->Size = System::Drawing::Size(66, 410);
			this->ButtonSide->TabIndex = 18;
			this->ButtonSide->Text = L"☰";
			this->ButtonSide->UseVisualStyleBackColor = false;
			this->ButtonSide->Click += gcnew System::EventHandler(this, &ManageTeams::ButtonSide_Click);
			// 
			// GifPictureBox
			// 
			this->GifPictureBox->BackColor = System::Drawing::Color::White;
			this->GifPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GifPictureBox.Image")));
			this->GifPictureBox->Location = System::Drawing::Point(75, 568);
			this->GifPictureBox->Name = L"GifPictureBox";
			this->GifPictureBox->Size = System::Drawing::Size(162, 115);
			this->GifPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->GifPictureBox->TabIndex = 24;
			this->GifPictureBox->TabStop = false;
			// 
			// BottomPanel
			// 
			this->BottomPanel->Controls->Add(this->lblStatus);
			this->BottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->BottomPanel->Location = System::Drawing::Point(0, 713);
			this->BottomPanel->Name = L"BottomPanel";
			this->BottomPanel->Size = System::Drawing::Size(1258, 47);
			this->BottomPanel->TabIndex = 2;
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatus->Location = System::Drawing::Point(0, -7);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(140, 54);
			this->lblStatus->TabIndex = 0;
			this->lblStatus->Text = L"Status:";
			// 
			// slideTimer
			// 
			this->slideTimer->Interval = 8;
			this->slideTimer->Tick += gcnew System::EventHandler(this, &ManageTeams::slideTimer_Tick);
			// 
			// ClockTimer
			// 
			this->ClockTimer->Interval = 1000;
			this->ClockTimer->Tick += gcnew System::EventHandler(this, &ManageTeams::ClockTimer_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pnl16);
			this->panel1->Controls->Add(this->pnl15);
			this->panel1->Controls->Add(this->pnl14);
			this->panel1->Controls->Add(this->pnl13);
			this->panel1->Controls->Add(this->pnl12);
			this->panel1->Controls->Add(this->pnl11);
			this->panel1->Controls->Add(this->pnl10);
			this->panel1->Controls->Add(this->pnl9);
			this->panel1->Controls->Add(this->pnl8);
			this->panel1->Controls->Add(this->pnl7);
			this->panel1->Controls->Add(this->pnl6);
			this->panel1->Controls->Add(this->pnl5);
			this->panel1->Controls->Add(this->pnl4);
			this->panel1->Controls->Add(this->pnl3);
			this->panel1->Controls->Add(this->pnl2);
			this->panel1->Controls->Add(this->pnl1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(456, 120);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(802, 593);
			this->panel1->TabIndex = 3;
			// 
			// pnl16
			// 
			this->pnl16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl16->Controls->Add(this->lblMembers16);
			this->pnl16->Controls->Add(this->richTextBox16);
			this->pnl16->Controls->Add(this->flip16);
			this->pnl16->Controls->Add(this->label16);
			this->pnl16->Controls->Add(this->lblName16);
			this->pnl16->Location = System::Drawing::Point(592, 434);
			this->pnl16->Name = L"pnl16";
			this->pnl16->Size = System::Drawing::Size(181, 126);
			this->pnl16->TabIndex = 15;
			// 
			// lblMembers16
			// 
			this->lblMembers16->AutoSize = true;
			this->lblMembers16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers16->Location = System::Drawing::Point(0, 0);
			this->lblMembers16->Name = L"lblMembers16";
			this->lblMembers16->Size = System::Drawing::Size(100, 28);
			this->lblMembers16->TabIndex = 5;
			this->lblMembers16->Text = L"Members";
			this->lblMembers16->Visible = false;
			// 
			// richTextBox16
			// 
			this->richTextBox16->Location = System::Drawing::Point(-2, 48);
			this->richTextBox16->Name = L"richTextBox16";
			this->richTextBox16->Size = System::Drawing::Size(182, 77);
			this->richTextBox16->TabIndex = 4;
			this->richTextBox16->Text = L"";
			this->richTextBox16->Visible = false;
			// 
			// flip16
			// 
			this->flip16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip16.Image")));
			this->flip16->Location = System::Drawing::Point(120, 0);
			this->flip16->Name = L"flip16";
			this->flip16->Size = System::Drawing::Size(59, 52);
			this->flip16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip16->TabIndex = 3;
			this->flip16->TabStop = false;
			this->flip16->Click += gcnew System::EventHandler(this, &ManageTeams::flip16_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(121, 97);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 28);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Rank";
			// 
			// lblName16
			// 
			this->lblName16->AutoSize = true;
			this->lblName16->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName16->Location = System::Drawing::Point(0, 0);
			this->lblName16->Name = L"lblName16";
			this->lblName16->Size = System::Drawing::Size(68, 28);
			this->lblName16->TabIndex = 1;
			this->lblName16->Text = L"Name";
			// 
			// pnl15
			// 
			this->pnl15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl15->Controls->Add(this->lblMembers15);
			this->pnl15->Controls->Add(this->richTextBox15);
			this->pnl15->Controls->Add(this->flip15);
			this->pnl15->Controls->Add(this->label15);
			this->pnl15->Controls->Add(this->lblName15);
			this->pnl15->Location = System::Drawing::Point(396, 434);
			this->pnl15->Name = L"pnl15";
			this->pnl15->Size = System::Drawing::Size(181, 126);
			this->pnl15->TabIndex = 14;
			// 
			// lblMembers15
			// 
			this->lblMembers15->AutoSize = true;
			this->lblMembers15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers15->Location = System::Drawing::Point(0, 2);
			this->lblMembers15->Name = L"lblMembers15";
			this->lblMembers15->Size = System::Drawing::Size(100, 28);
			this->lblMembers15->TabIndex = 5;
			this->lblMembers15->Text = L"Members";
			this->lblMembers15->Visible = false;
			// 
			// richTextBox15
			// 
			this->richTextBox15->Location = System::Drawing::Point(-2, 48);
			this->richTextBox15->Name = L"richTextBox15";
			this->richTextBox15->Size = System::Drawing::Size(182, 77);
			this->richTextBox15->TabIndex = 4;
			this->richTextBox15->Text = L"";
			this->richTextBox15->Visible = false;
			// 
			// flip15
			// 
			this->flip15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip15.Image")));
			this->flip15->Location = System::Drawing::Point(120, 0);
			this->flip15->Name = L"flip15";
			this->flip15->Size = System::Drawing::Size(59, 52);
			this->flip15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip15->TabIndex = 3;
			this->flip15->TabStop = false;
			this->flip15->Click += gcnew System::EventHandler(this, &ManageTeams::flip15_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(121, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 28);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Rank";
			// 
			// lblName15
			// 
			this->lblName15->AutoSize = true;
			this->lblName15->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName15->Location = System::Drawing::Point(0, 0);
			this->lblName15->Name = L"lblName15";
			this->lblName15->Size = System::Drawing::Size(68, 28);
			this->lblName15->TabIndex = 1;
			this->lblName15->Text = L"Name";
			// 
			// pnl14
			// 
			this->pnl14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl14->Controls->Add(this->lblMembers14);
			this->pnl14->Controls->Add(this->richTextBox14);
			this->pnl14->Controls->Add(this->flip14);
			this->pnl14->Controls->Add(this->label14);
			this->pnl14->Controls->Add(this->lblName14);
			this->pnl14->Location = System::Drawing::Point(198, 437);
			this->pnl14->Name = L"pnl14";
			this->pnl14->Size = System::Drawing::Size(181, 123);
			this->pnl14->TabIndex = 13;
			// 
			// lblMembers14
			// 
			this->lblMembers14->AutoSize = true;
			this->lblMembers14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers14->Location = System::Drawing::Point(0, -3);
			this->lblMembers14->Name = L"lblMembers14";
			this->lblMembers14->Size = System::Drawing::Size(100, 28);
			this->lblMembers14->TabIndex = 5;
			this->lblMembers14->Text = L"Members";
			this->lblMembers14->Visible = false;
			// 
			// richTextBox14
			// 
			this->richTextBox14->Location = System::Drawing::Point(-2, 48);
			this->richTextBox14->Name = L"richTextBox14";
			this->richTextBox14->Size = System::Drawing::Size(182, 77);
			this->richTextBox14->TabIndex = 4;
			this->richTextBox14->Text = L"";
			this->richTextBox14->Visible = false;
			// 
			// flip14
			// 
			this->flip14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip14.Image")));
			this->flip14->Location = System::Drawing::Point(120, 0);
			this->flip14->Name = L"flip14";
			this->flip14->Size = System::Drawing::Size(59, 52);
			this->flip14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip14->TabIndex = 3;
			this->flip14->TabStop = false;
			this->flip14->Click += gcnew System::EventHandler(this, &ManageTeams::flip14_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(121, 94);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 28);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Rank";
			// 
			// lblName14
			// 
			this->lblName14->AutoSize = true;
			this->lblName14->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName14->Location = System::Drawing::Point(0, 0);
			this->lblName14->Name = L"lblName14";
			this->lblName14->Size = System::Drawing::Size(68, 28);
			this->lblName14->TabIndex = 1;
			this->lblName14->Text = L"Name";
			// 
			// pnl13
			// 
			this->pnl13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl13->Controls->Add(this->lblMembers13);
			this->pnl13->Controls->Add(this->richTextBox13);
			this->pnl13->Controls->Add(this->flip13);
			this->pnl13->Controls->Add(this->label13);
			this->pnl13->Controls->Add(this->lblName13);
			this->pnl13->Location = System::Drawing::Point(4, 437);
			this->pnl13->Name = L"pnl13";
			this->pnl13->Size = System::Drawing::Size(181, 123);
			this->pnl13->TabIndex = 12;
			// 
			// lblMembers13
			// 
			this->lblMembers13->AutoSize = true;
			this->lblMembers13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers13->Location = System::Drawing::Point(3, 0);
			this->lblMembers13->Name = L"lblMembers13";
			this->lblMembers13->Size = System::Drawing::Size(100, 28);
			this->lblMembers13->TabIndex = 5;
			this->lblMembers13->Text = L"Members";
			this->lblMembers13->Visible = false;
			// 
			// richTextBox13
			// 
			this->richTextBox13->Location = System::Drawing::Point(-2, 48);
			this->richTextBox13->Name = L"richTextBox13";
			this->richTextBox13->Size = System::Drawing::Size(182, 77);
			this->richTextBox13->TabIndex = 4;
			this->richTextBox13->Text = L"";
			this->richTextBox13->Visible = false;
			// 
			// flip13
			// 
			this->flip13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip13.Image")));
			this->flip13->Location = System::Drawing::Point(120, 0);
			this->flip13->Name = L"flip13";
			this->flip13->Size = System::Drawing::Size(59, 52);
			this->flip13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip13->TabIndex = 3;
			this->flip13->TabStop = false;
			this->flip13->Click += gcnew System::EventHandler(this, &ManageTeams::flip13_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(121, 93);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 28);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Rank";
			// 
			// lblName13
			// 
			this->lblName13->AutoSize = true;
			this->lblName13->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName13->Location = System::Drawing::Point(0, 0);
			this->lblName13->Name = L"lblName13";
			this->lblName13->Size = System::Drawing::Size(68, 28);
			this->lblName13->TabIndex = 1;
			this->lblName13->Text = L"Name";
			// 
			// pnl12
			// 
			this->pnl12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl12->Controls->Add(this->lblMembers12);
			this->pnl12->Controls->Add(this->richTextBox12);
			this->pnl12->Controls->Add(this->flip12);
			this->pnl12->Controls->Add(this->label12);
			this->pnl12->Controls->Add(this->lblName12);
			this->pnl12->Location = System::Drawing::Point(592, 293);
			this->pnl12->Name = L"pnl12";
			this->pnl12->Size = System::Drawing::Size(181, 126);
			this->pnl12->TabIndex = 11;
			// 
			// lblMembers12
			// 
			this->lblMembers12->AutoSize = true;
			this->lblMembers12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers12->Location = System::Drawing::Point(3, 5);
			this->lblMembers12->Name = L"lblMembers12";
			this->lblMembers12->Size = System::Drawing::Size(100, 28);
			this->lblMembers12->TabIndex = 5;
			this->lblMembers12->Text = L"Members";
			this->lblMembers12->Visible = false;
			// 
			// richTextBox12
			// 
			this->richTextBox12->Location = System::Drawing::Point(-2, 48);
			this->richTextBox12->Name = L"richTextBox12";
			this->richTextBox12->Size = System::Drawing::Size(182, 77);
			this->richTextBox12->TabIndex = 4;
			this->richTextBox12->Text = L"";
			this->richTextBox12->Visible = false;
			// 
			// flip12
			// 
			this->flip12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip12.Image")));
			this->flip12->Location = System::Drawing::Point(120, 0);
			this->flip12->Name = L"flip12";
			this->flip12->Size = System::Drawing::Size(59, 53);
			this->flip12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip12->TabIndex = 3;
			this->flip12->TabStop = false;
			this->flip12->Click += gcnew System::EventHandler(this, &ManageTeams::flip12_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(121, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 28);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Rank";
			// 
			// lblName12
			// 
			this->lblName12->AutoSize = true;
			this->lblName12->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName12->Location = System::Drawing::Point(0, 0);
			this->lblName12->Name = L"lblName12";
			this->lblName12->Size = System::Drawing::Size(68, 28);
			this->lblName12->TabIndex = 1;
			this->lblName12->Text = L"Name";
			// 
			// pnl11
			// 
			this->pnl11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl11->Controls->Add(this->lblMembers11);
			this->pnl11->Controls->Add(this->richTextBox11);
			this->pnl11->Controls->Add(this->flip11);
			this->pnl11->Controls->Add(this->label11);
			this->pnl11->Controls->Add(this->lblName11);
			this->pnl11->Location = System::Drawing::Point(396, 293);
			this->pnl11->Name = L"pnl11";
			this->pnl11->Size = System::Drawing::Size(181, 126);
			this->pnl11->TabIndex = 10;
			// 
			// lblMembers11
			// 
			this->lblMembers11->AutoSize = true;
			this->lblMembers11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers11->Location = System::Drawing::Point(3, 3);
			this->lblMembers11->Name = L"lblMembers11";
			this->lblMembers11->Size = System::Drawing::Size(100, 28);
			this->lblMembers11->TabIndex = 5;
			this->lblMembers11->Text = L"Members";
			this->lblMembers11->Visible = false;
			// 
			// richTextBox11
			// 
			this->richTextBox11->Location = System::Drawing::Point(-2, 48);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->Size = System::Drawing::Size(182, 77);
			this->richTextBox11->TabIndex = 4;
			this->richTextBox11->Text = L"";
			this->richTextBox11->Visible = false;
			// 
			// flip11
			// 
			this->flip11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip11.Image")));
			this->flip11->Location = System::Drawing::Point(121, 0);
			this->flip11->Name = L"flip11";
			this->flip11->Size = System::Drawing::Size(59, 52);
			this->flip11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip11->TabIndex = 3;
			this->flip11->TabStop = false;
			this->flip11->Click += gcnew System::EventHandler(this, &ManageTeams::flip11_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(121, 96);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 28);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Rank";
			// 
			// lblName11
			// 
			this->lblName11->AutoSize = true;
			this->lblName11->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName11->Location = System::Drawing::Point(0, 0);
			this->lblName11->Name = L"lblName11";
			this->lblName11->Size = System::Drawing::Size(68, 28);
			this->lblName11->TabIndex = 1;
			this->lblName11->Text = L"Name";
			// 
			// pnl10
			// 
			this->pnl10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl10->Controls->Add(this->lblMembers10);
			this->pnl10->Controls->Add(this->richTextBox10);
			this->pnl10->Controls->Add(this->flip10);
			this->pnl10->Controls->Add(this->label10);
			this->pnl10->Controls->Add(this->lblName10);
			this->pnl10->Location = System::Drawing::Point(198, 296);
			this->pnl10->Name = L"pnl10";
			this->pnl10->Size = System::Drawing::Size(181, 123);
			this->pnl10->TabIndex = 9;
			// 
			// lblMembers10
			// 
			this->lblMembers10->AutoSize = true;
			this->lblMembers10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers10->Location = System::Drawing::Point(3, 2);
			this->lblMembers10->Name = L"lblMembers10";
			this->lblMembers10->Size = System::Drawing::Size(100, 28);
			this->lblMembers10->TabIndex = 5;
			this->lblMembers10->Text = L"Members";
			this->lblMembers10->Visible = false;
			// 
			// richTextBox10
			// 
			this->richTextBox10->Location = System::Drawing::Point(-2, 48);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->Size = System::Drawing::Size(182, 77);
			this->richTextBox10->TabIndex = 4;
			this->richTextBox10->Text = L"";
			this->richTextBox10->Visible = false;
			// 
			// flip10
			// 
			this->flip10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip10.Image")));
			this->flip10->Location = System::Drawing::Point(120, 0);
			this->flip10->Name = L"flip10";
			this->flip10->Size = System::Drawing::Size(59, 52);
			this->flip10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip10->TabIndex = 3;
			this->flip10->TabStop = false;
			this->flip10->Click += gcnew System::EventHandler(this, &ManageTeams::flip10_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(121, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 28);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Rank";
			// 
			// lblName10
			// 
			this->lblName10->AutoSize = true;
			this->lblName10->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName10->Location = System::Drawing::Point(0, 0);
			this->lblName10->Name = L"lblName10";
			this->lblName10->Size = System::Drawing::Size(68, 28);
			this->lblName10->TabIndex = 1;
			this->lblName10->Text = L"Name";
			// 
			// pnl9
			// 
			this->pnl9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl9->Controls->Add(this->lblMembers9);
			this->pnl9->Controls->Add(this->richTextBox9);
			this->pnl9->Controls->Add(this->flip9);
			this->pnl9->Controls->Add(this->label9);
			this->pnl9->Controls->Add(this->lblName9);
			this->pnl9->Location = System::Drawing::Point(4, 296);
			this->pnl9->Name = L"pnl9";
			this->pnl9->Size = System::Drawing::Size(181, 123);
			this->pnl9->TabIndex = 8;
			// 
			// lblMembers9
			// 
			this->lblMembers9->AutoSize = true;
			this->lblMembers9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers9->Location = System::Drawing::Point(3, 2);
			this->lblMembers9->Name = L"lblMembers9";
			this->lblMembers9->Size = System::Drawing::Size(100, 28);
			this->lblMembers9->TabIndex = 5;
			this->lblMembers9->Text = L"Members";
			this->lblMembers9->Visible = false;
			// 
			// richTextBox9
			// 
			this->richTextBox9->Location = System::Drawing::Point(-2, 48);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(182, 77);
			this->richTextBox9->TabIndex = 4;
			this->richTextBox9->Text = L"";
			this->richTextBox9->Visible = false;
			// 
			// flip9
			// 
			this->flip9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip9.Image")));
			this->flip9->Location = System::Drawing::Point(120, 0);
			this->flip9->Name = L"flip9";
			this->flip9->Size = System::Drawing::Size(59, 52);
			this->flip9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip9->TabIndex = 3;
			this->flip9->TabStop = false;
			this->flip9->Click += gcnew System::EventHandler(this, &ManageTeams::flip9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(121, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 28);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Rank";
			// 
			// lblName9
			// 
			this->lblName9->AutoSize = true;
			this->lblName9->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName9->Location = System::Drawing::Point(0, 0);
			this->lblName9->Name = L"lblName9";
			this->lblName9->Size = System::Drawing::Size(68, 28);
			this->lblName9->TabIndex = 1;
			this->lblName9->Text = L"Name";
			// 
			// pnl8
			// 
			this->pnl8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl8->Controls->Add(this->lblMembers8);
			this->pnl8->Controls->Add(this->richTextBox8);
			this->pnl8->Controls->Add(this->flip8);
			this->pnl8->Controls->Add(this->label8);
			this->pnl8->Controls->Add(this->lblName8);
			this->pnl8->Location = System::Drawing::Point(592, 150);
			this->pnl8->Name = L"pnl8";
			this->pnl8->Size = System::Drawing::Size(181, 126);
			this->pnl8->TabIndex = 7;
			// 
			// lblMembers8
			// 
			this->lblMembers8->AutoSize = true;
			this->lblMembers8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers8->Location = System::Drawing::Point(3, 6);
			this->lblMembers8->Name = L"lblMembers8";
			this->lblMembers8->Size = System::Drawing::Size(100, 28);
			this->lblMembers8->TabIndex = 5;
			this->lblMembers8->Text = L"Members";
			this->lblMembers8->Visible = false;
			// 
			// richTextBox8
			// 
			this->richTextBox8->Location = System::Drawing::Point(-2, 48);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(182, 77);
			this->richTextBox8->TabIndex = 4;
			this->richTextBox8->Text = L"";
			this->richTextBox8->Visible = false;
			// 
			// flip8
			// 
			this->flip8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip8.Image")));
			this->flip8->Location = System::Drawing::Point(120, 0);
			this->flip8->Name = L"flip8";
			this->flip8->Size = System::Drawing::Size(59, 52);
			this->flip8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip8->TabIndex = 3;
			this->flip8->TabStop = false;
			this->flip8->Click += gcnew System::EventHandler(this, &ManageTeams::flip8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(121, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Rank";
			// 
			// lblName8
			// 
			this->lblName8->AutoSize = true;
			this->lblName8->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName8->Location = System::Drawing::Point(0, 0);
			this->lblName8->Name = L"lblName8";
			this->lblName8->Size = System::Drawing::Size(68, 28);
			this->lblName8->TabIndex = 1;
			this->lblName8->Text = L"Name";
			// 
			// pnl7
			// 
			this->pnl7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl7->Controls->Add(this->lblMembers7);
			this->pnl7->Controls->Add(this->richTextBox7);
			this->pnl7->Controls->Add(this->flip7);
			this->pnl7->Controls->Add(this->label7);
			this->pnl7->Controls->Add(this->lblName7);
			this->pnl7->Location = System::Drawing::Point(396, 150);
			this->pnl7->Name = L"pnl7";
			this->pnl7->Size = System::Drawing::Size(181, 126);
			this->pnl7->TabIndex = 6;
			// 
			// lblMembers7
			// 
			this->lblMembers7->AutoSize = true;
			this->lblMembers7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers7->Location = System::Drawing::Point(3, 6);
			this->lblMembers7->Name = L"lblMembers7";
			this->lblMembers7->Size = System::Drawing::Size(100, 28);
			this->lblMembers7->TabIndex = 5;
			this->lblMembers7->Text = L"Members";
			this->lblMembers7->Visible = false;
			// 
			// richTextBox7
			// 
			this->richTextBox7->Location = System::Drawing::Point(-2, 48);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(182, 77);
			this->richTextBox7->TabIndex = 4;
			this->richTextBox7->Text = L"";
			this->richTextBox7->Visible = false;
			// 
			// flip7
			// 
			this->flip7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip7.Image")));
			this->flip7->Location = System::Drawing::Point(120, 0);
			this->flip7->Name = L"flip7";
			this->flip7->Size = System::Drawing::Size(59, 52);
			this->flip7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip7->TabIndex = 3;
			this->flip7->TabStop = false;
			this->flip7->Click += gcnew System::EventHandler(this, &ManageTeams::flip7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(121, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 28);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Rank";
			// 
			// lblName7
			// 
			this->lblName7->AutoSize = true;
			this->lblName7->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName7->Location = System::Drawing::Point(0, 0);
			this->lblName7->Name = L"lblName7";
			this->lblName7->Size = System::Drawing::Size(68, 28);
			this->lblName7->TabIndex = 1;
			this->lblName7->Text = L"Name";
			// 
			// pnl6
			// 
			this->pnl6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl6->Controls->Add(this->lblMembers6);
			this->pnl6->Controls->Add(this->richTextBox6);
			this->pnl6->Controls->Add(this->flip6);
			this->pnl6->Controls->Add(this->label6);
			this->pnl6->Controls->Add(this->lblName6);
			this->pnl6->Location = System::Drawing::Point(198, 153);
			this->pnl6->Name = L"pnl6";
			this->pnl6->Size = System::Drawing::Size(181, 123);
			this->pnl6->TabIndex = 5;
			// 
			// lblMembers6
			// 
			this->lblMembers6->AutoSize = true;
			this->lblMembers6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers6->Location = System::Drawing::Point(3, 3);
			this->lblMembers6->Name = L"lblMembers6";
			this->lblMembers6->Size = System::Drawing::Size(100, 28);
			this->lblMembers6->TabIndex = 5;
			this->lblMembers6->Text = L"Members";
			this->lblMembers6->Visible = false;
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(-2, 48);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(182, 77);
			this->richTextBox6->TabIndex = 4;
			this->richTextBox6->Text = L"";
			this->richTextBox6->Visible = false;
			// 
			// flip6
			// 
			this->flip6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip6.Image")));
			this->flip6->Location = System::Drawing::Point(120, 0);
			this->flip6->Name = L"flip6";
			this->flip6->Size = System::Drawing::Size(59, 52);
			this->flip6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip6->TabIndex = 3;
			this->flip6->TabStop = false;
			this->flip6->Click += gcnew System::EventHandler(this, &ManageTeams::flip6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(121, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Rank";
			// 
			// lblName6
			// 
			this->lblName6->AutoSize = true;
			this->lblName6->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName6->Location = System::Drawing::Point(0, 0);
			this->lblName6->Name = L"lblName6";
			this->lblName6->Size = System::Drawing::Size(68, 28);
			this->lblName6->TabIndex = 1;
			this->lblName6->Text = L"Name";
			// 
			// pnl5
			// 
			this->pnl5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl5->Controls->Add(this->lblMembers5);
			this->pnl5->Controls->Add(this->richTextBox5);
			this->pnl5->Controls->Add(this->flip5);
			this->pnl5->Controls->Add(this->label5);
			this->pnl5->Controls->Add(this->lblName5);
			this->pnl5->Location = System::Drawing::Point(4, 153);
			this->pnl5->Name = L"pnl5";
			this->pnl5->Size = System::Drawing::Size(181, 123);
			this->pnl5->TabIndex = 4;
			// 
			// lblMembers5
			// 
			this->lblMembers5->AutoSize = true;
			this->lblMembers5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers5->Location = System::Drawing::Point(3, 3);
			this->lblMembers5->Name = L"lblMembers5";
			this->lblMembers5->Size = System::Drawing::Size(100, 28);
			this->lblMembers5->TabIndex = 5;
			this->lblMembers5->Text = L"Members";
			this->lblMembers5->Visible = false;
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(-2, 48);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(182, 77);
			this->richTextBox5->TabIndex = 4;
			this->richTextBox5->Text = L"";
			this->richTextBox5->Visible = false;
			// 
			// flip5
			// 
			this->flip5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip5.Image")));
			this->flip5->Location = System::Drawing::Point(120, 0);
			this->flip5->Name = L"flip5";
			this->flip5->Size = System::Drawing::Size(59, 52);
			this->flip5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip5->TabIndex = 3;
			this->flip5->TabStop = false;
			this->flip5->Click += gcnew System::EventHandler(this, &ManageTeams::flip5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(121, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 28);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Rank";
			// 
			// lblName5
			// 
			this->lblName5->AutoSize = true;
			this->lblName5->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName5->Location = System::Drawing::Point(0, 0);
			this->lblName5->Name = L"lblName5";
			this->lblName5->Size = System::Drawing::Size(68, 28);
			this->lblName5->TabIndex = 1;
			this->lblName5->Text = L"Name";
			// 
			// pnl4
			// 
			this->pnl4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl4->Controls->Add(this->lblMembers4);
			this->pnl4->Controls->Add(this->richTextBox4);
			this->pnl4->Controls->Add(this->flip4);
			this->pnl4->Controls->Add(this->label4);
			this->pnl4->Controls->Add(this->lblName4);
			this->pnl4->Location = System::Drawing::Point(592, 6);
			this->pnl4->Name = L"pnl4";
			this->pnl4->Size = System::Drawing::Size(181, 126);
			this->pnl4->TabIndex = 3;
			// 
			// lblMembers4
			// 
			this->lblMembers4->AutoSize = true;
			this->lblMembers4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers4->Location = System::Drawing::Point(3, 2);
			this->lblMembers4->Name = L"lblMembers4";
			this->lblMembers4->Size = System::Drawing::Size(100, 28);
			this->lblMembers4->TabIndex = 5;
			this->lblMembers4->Text = L"Members";
			this->lblMembers4->Visible = false;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(-2, 48);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(182, 77);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"";
			this->richTextBox4->Visible = false;
			// 
			// flip4
			// 
			this->flip4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip4.Image")));
			this->flip4->Location = System::Drawing::Point(120, 0);
			this->flip4->Name = L"flip4";
			this->flip4->Size = System::Drawing::Size(59, 52);
			this->flip4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip4->TabIndex = 3;
			this->flip4->TabStop = false;
			this->flip4->Click += gcnew System::EventHandler(this, &ManageTeams::flip4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(117, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 28);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Rank";
			// 
			// lblName4
			// 
			this->lblName4->AutoSize = true;
			this->lblName4->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName4->Location = System::Drawing::Point(0, 0);
			this->lblName4->Name = L"lblName4";
			this->lblName4->Size = System::Drawing::Size(68, 28);
			this->lblName4->TabIndex = 1;
			this->lblName4->Text = L"Name";
			// 
			// pnl3
			// 
			this->pnl3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl3->Controls->Add(this->lblMembers3);
			this->pnl3->Controls->Add(this->richTextBox3);
			this->pnl3->Controls->Add(this->flip3);
			this->pnl3->Controls->Add(this->label3);
			this->pnl3->Controls->Add(this->lblName3);
			this->pnl3->Location = System::Drawing::Point(396, 6);
			this->pnl3->Name = L"pnl3";
			this->pnl3->Size = System::Drawing::Size(181, 126);
			this->pnl3->TabIndex = 2;
			// 
			// lblMembers3
			// 
			this->lblMembers3->AutoSize = true;
			this->lblMembers3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers3->Location = System::Drawing::Point(3, 3);
			this->lblMembers3->Name = L"lblMembers3";
			this->lblMembers3->Size = System::Drawing::Size(100, 28);
			this->lblMembers3->TabIndex = 5;
			this->lblMembers3->Text = L"Members";
			this->lblMembers3->Visible = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(-2, 48);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(182, 77);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			this->richTextBox3->Visible = false;
			// 
			// flip3
			// 
			this->flip3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip3.Image")));
			this->flip3->Location = System::Drawing::Point(120, 0);
			this->flip3->Name = L"flip3";
			this->flip3->Size = System::Drawing::Size(59, 52);
			this->flip3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip3->TabIndex = 3;
			this->flip3->TabStop = false;
			this->flip3->Click += gcnew System::EventHandler(this, &ManageTeams::flip3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(121, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Rank";
			// 
			// lblName3
			// 
			this->lblName3->AutoSize = true;
			this->lblName3->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName3->Location = System::Drawing::Point(0, 0);
			this->lblName3->Name = L"lblName3";
			this->lblName3->Size = System::Drawing::Size(68, 28);
			this->lblName3->TabIndex = 1;
			this->lblName3->Text = L"Name";
			// 
			// pnl2
			// 
			this->pnl2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl2->Controls->Add(this->lblMembers2);
			this->pnl2->Controls->Add(this->richTextBox2);
			this->pnl2->Controls->Add(this->flip2);
			this->pnl2->Controls->Add(this->label2);
			this->pnl2->Controls->Add(this->lblName2);
			this->pnl2->Location = System::Drawing::Point(198, 9);
			this->pnl2->Name = L"pnl2";
			this->pnl2->Size = System::Drawing::Size(181, 123);
			this->pnl2->TabIndex = 1;
			this->pnl2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ManageTeams::panel3_Paint);
			// 
			// lblMembers2
			// 
			this->lblMembers2->AutoSize = true;
			this->lblMembers2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers2->Location = System::Drawing::Point(3, 0);
			this->lblMembers2->Name = L"lblMembers2";
			this->lblMembers2->Size = System::Drawing::Size(100, 28);
			this->lblMembers2->TabIndex = 5;
			this->lblMembers2->Text = L"Members";
			this->lblMembers2->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(-2, 48);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(182, 77);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			// 
			// flip2
			// 
			this->flip2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip2.Image")));
			this->flip2->Location = System::Drawing::Point(120, 0);
			this->flip2->Name = L"flip2";
			this->flip2->Size = System::Drawing::Size(59, 52);
			this->flip2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip2->TabIndex = 3;
			this->flip2->TabStop = false;
			this->flip2->Click += gcnew System::EventHandler(this, &ManageTeams::flip2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(121, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rank";
			// 
			// lblName2
			// 
			this->lblName2->AutoSize = true;
			this->lblName2->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName2->Location = System::Drawing::Point(0, 0);
			this->lblName2->Name = L"lblName2";
			this->lblName2->Size = System::Drawing::Size(68, 28);
			this->lblName2->TabIndex = 1;
			this->lblName2->Text = L"Name";
			// 
			// pnl1
			// 
			this->pnl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl1->Controls->Add(this->lblMembers1);
			this->pnl1->Controls->Add(this->richTextBox1);
			this->pnl1->Controls->Add(this->flip1);
			this->pnl1->Controls->Add(this->label1);
			this->pnl1->Controls->Add(this->lblName1);
			this->pnl1->Location = System::Drawing::Point(4, 9);
			this->pnl1->Name = L"pnl1";
			this->pnl1->Size = System::Drawing::Size(181, 123);
			this->pnl1->TabIndex = 0;
			// 
			// lblMembers1
			// 
			this->lblMembers1->AutoSize = true;
			this->lblMembers1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembers1->Location = System::Drawing::Point(0, -3);
			this->lblMembers1->Name = L"lblMembers1";
			this->lblMembers1->Size = System::Drawing::Size(100, 28);
			this->lblMembers1->TabIndex = 4;
			this->lblMembers1->Text = L"Members";
			this->lblMembers1->Visible = false;
			this->lblMembers1->Click += gcnew System::EventHandler(this, &ManageTeams::label17_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Red;
			this->richTextBox1->Location = System::Drawing::Point(-2, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(182, 77);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// flip1
			// 
			this->flip1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flip1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flip1.Image")));
			this->flip1->Location = System::Drawing::Point(120, 0);
			this->flip1->Name = L"flip1";
			this->flip1->Size = System::Drawing::Size(59, 52);
			this->flip1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->flip1->TabIndex = 2;
			this->flip1->TabStop = false;
			this->flip1->Click += gcnew System::EventHandler(this, &ManageTeams::flip1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Rank";
			// 
			// lblName1
			// 
			this->lblName1->AutoSize = true;
			this->lblName1->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblName1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName1->Location = System::Drawing::Point(0, 0);
			this->lblName1->Name = L"lblName1";
			this->lblName1->Size = System::Drawing::Size(68, 28);
			this->lblName1->TabIndex = 0;
			this->lblName1->Text = L"Name";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(271, 638);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(126, 45);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Flip All ";
			// 
			// ManageTeams
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1258, 760);
			this->Controls->Add(this->flipAll);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->BottomPanel);
			this->Controls->Add(this->NavPanel);
			this->Controls->Add(this->GifPictureBox);
			this->Controls->Add(this->Label_Panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ManageTeams";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ManageTeams";
			this->Label_Panel->ResumeLayout(false);
			this->Label_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flipAll))->EndInit();
			this->NavPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GifPictureBox))->EndInit();
			this->BottomPanel->ResumeLayout(false);
			this->BottomPanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->pnl16->ResumeLayout(false);
			this->pnl16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip16))->EndInit();
			this->pnl15->ResumeLayout(false);
			this->pnl15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip15))->EndInit();
			this->pnl14->ResumeLayout(false);
			this->pnl14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip14))->EndInit();
			this->pnl13->ResumeLayout(false);
			this->pnl13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip13))->EndInit();
			this->pnl12->ResumeLayout(false);
			this->pnl12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip12))->EndInit();
			this->pnl11->ResumeLayout(false);
			this->pnl11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip11))->EndInit();
			this->pnl10->ResumeLayout(false);
			this->pnl10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip10))->EndInit();
			this->pnl9->ResumeLayout(false);
			this->pnl9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip9))->EndInit();
			this->pnl8->ResumeLayout(false);
			this->pnl8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip8))->EndInit();
			this->pnl7->ResumeLayout(false);
			this->pnl7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip7))->EndInit();
			this->pnl6->ResumeLayout(false);
			this->pnl6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip6))->EndInit();
			this->pnl5->ResumeLayout(false);
			this->pnl5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip5))->EndInit();
			this->pnl4->ResumeLayout(false);
			this->pnl4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip4))->EndInit();
			this->pnl3->ResumeLayout(false);
			this->pnl3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip3))->EndInit();
			this->pnl2->ResumeLayout(false);
			this->pnl2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip2))->EndInit();
			this->pnl1->ResumeLayout(false);
			this->pnl1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flip1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Minimize_PictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
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
private: System::Void ClockLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ClockTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	ClockLabel->Text = DateTime::Now.ToString("hh:mm:ss tt"); 	// Format the time as HH:mm:ss
	DateLabel->Text = DateTime::Now.ToString("dddd, MMMM dd, yyyy");
}
private: System::Void lblSubtitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flip1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName1->Visible && label1->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName1->Visible = false;
		label1->Visible = false;
		richTextBox1->Visible = true;
		lblMembers1->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName1->Visible = true;
		label1->Visible = true;
		richTextBox1->Visible = false;
		lblMembers1->Visible = false;
	}
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flip2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblName2->Visible && label2->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName2->Visible = false;
		label2->Visible = false;
		richTextBox2->Visible = true;
		lblMembers2->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName2->Visible = true;
		label2->Visible = true;
		richTextBox2->Visible = false;
		lblMembers2->Visible = false;
	}
}
private: System::Void flip3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName3->Visible && label3->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName3->Visible = false;
		label3->Visible = false;
		richTextBox3->Visible = true;
		lblMembers3->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName3->Visible = true;
		label3->Visible = true;
		richTextBox3->Visible = false;
		lblMembers3->Visible = false;
	}
}
private: System::Void flip4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName4->Visible && label4->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName4->Visible = false;
		label4->Visible = false;
		richTextBox4->Visible = true;
		lblMembers4->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName4->Visible = true;
		label4->Visible = true;
		richTextBox4->Visible = false;
		lblMembers4->Visible = false;
	}
}
private: System::Void flip5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName5->Visible && label5->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName5->Visible = false;
		label5->Visible = false;
		richTextBox5->Visible = true;
		lblMembers5->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName5->Visible = true;
		label5->Visible = true;
		richTextBox5->Visible = false;
		lblMembers5->Visible = false;
	}
}
private: System::Void flip6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName6->Visible && label6->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName6->Visible = false;
		label6->Visible = false;
		richTextBox6->Visible = true;
		lblMembers6->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName6->Visible = true;
		label6->Visible = true;
		richTextBox6->Visible = false;
		lblMembers6->Visible = false;

	}
}
private: System::Void flip7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName7->Visible && label7->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName7->Visible = false;
		label7->Visible = false;
		richTextBox7->Visible = true;
		lblMembers7->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName7->Visible = true;
		label7->Visible = true;
		richTextBox7->Visible = false;
		lblMembers7->Visible = false;
	}
}
private: System::Void flip8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName8->Visible && label8->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName8->Visible = false;
		label8->Visible = false;
		richTextBox8->Visible = true;
		lblMembers8->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName8->Visible = true;
		label8->Visible = true;
		richTextBox8->Visible = false;
		lblMembers8->Visible = false;
	}
}
private: System::Void flip9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName9->Visible && label9->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName9->Visible = false;
		label9->Visible = false;
		richTextBox9->Visible = true;
		lblMembers9->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName9->Visible = true;
		label9->Visible = true;
		richTextBox9->Visible = false;
		lblMembers9->Visible = false;
	}
}
private: System::Void flip10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName10->Visible && label10->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName10->Visible = false;
		label10->Visible = false;
		richTextBox10->Visible = true;
		lblMembers10->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName10->Visible = true;
		label10->Visible = true;
		richTextBox10->Visible = false;
		lblMembers10->Visible = false;
	}
}
private: System::Void flip11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName11->Visible && label11->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName11->Visible = false;
		label11->Visible = false;
		richTextBox11->Visible = true;
		lblMembers11->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName11->Visible = true;
		label11->Visible = true;
		richTextBox11->Visible = false;
		lblMembers11->Visible = false;
	}
}
private: System::Void flip12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName12->Visible && label12->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName12->Visible = false;
		label12->Visible = false;
		richTextBox12->Visible = true;
		lblMembers12->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName12->Visible = true;
		label12->Visible = true;
		richTextBox12->Visible = false;
		lblMembers12->Visible = false;
	}
}
private: System::Void flip13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName13->Visible && label13->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName13->Visible = false;
		label13->Visible = false;
		richTextBox13->Visible = true;
		lblMembers13->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName13->Visible = true;
		label13->Visible = true;
		richTextBox13->Visible = false;
		lblMembers13->Visible = false;
	}
}
private: System::Void flip14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName14->Visible && label14->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName14->Visible = false;
		label14->Visible = false;
		richTextBox14->Visible = true;
		lblMembers14->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName14->Visible = true;
		label14->Visible = true;
		richTextBox14->Visible = false;
		lblMembers14->Visible = false;
	}
}
private: System::Void flip15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName15->Visible && label15->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName15->Visible = false;
		label15->Visible = false;
		richTextBox15->Visible = true;
		lblMembers15->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName15->Visible = true;
		label15->Visible = true;
		richTextBox15->Visible = false;
		lblMembers15->Visible = false;
	}
}
private: System::Void flip16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName16->Visible && label16->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName16->Visible = false;
		label16->Visible = false;
		richTextBox16->Visible = true;
		lblMembers16->Visible = true;
	}
	else {
		// If the RichTextBox is visible, hide it and show the labels
		lblName16->Visible = true;
		label16->Visible = true;
		richTextBox16->Visible = false;
		lblMembers16->Visible = false;

	}
}
private: System::Void flipAll_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblName1->Visible && label1->Visible) {
		// If the labels are visible, hide them and show the RichTextBox
		lblName1->Visible = false;
		label1->Visible = false;
		richTextBox1->Visible = true;
		lblMembers1->Visible = true;
		lblName2->Visible = false;
		label2->Visible = false;
		richTextBox2->Visible = true;
		lblMembers2->Visible = true;
		lblName3->Visible = false;
		label3->Visible = false;
		richTextBox3->Visible = true;
		lblMembers3->Visible = true;
		lblName4->Visible = false;
		label4->Visible = false;
		richTextBox4->Visible = true;
		lblMembers4->Visible = true;
		lblName5->Visible = false;
		label5->Visible = false;
		richTextBox5->Visible = true;
		lblMembers5->Visible = true;
		lblName6->Visible = false;
		label6->Visible = false;
		richTextBox6->Visible = true;
		lblMembers6->Visible = true;
		lblName7->Visible = false;
		label7->Visible = false;
		richTextBox7->Visible = true;
		lblMembers7->Visible = true;
		lblName8->Visible = false;
		label8->Visible = false;
		richTextBox8->Visible = true;
		lblMembers8->Visible = true;
		lblName9->Visible = false;
		label9->Visible = false;
		richTextBox9->Visible = true;
		lblMembers9->Visible = true;
		lblName10->Visible = false;
		label10->Visible = false;
		richTextBox10->Visible = true;
		lblMembers10->Visible = true;
		lblName11->Visible = false;
		label11->Visible = false;
		richTextBox11->Visible = true;
		lblMembers11->Visible = true;
		lblName12->Visible = false;
		label12->Visible = false;
		richTextBox12->Visible = true;
		lblMembers12->Visible = true;
		lblName13->Visible = false;
		label13->Visible = false;
		richTextBox13->Visible = true;
		lblMembers13->Visible = true;
		lblName14->Visible = false;
		label14->Visible = false;
		richTextBox14->Visible = true;
		lblMembers14->Visible = true;
		lblName15->Visible = false;
		label15->Visible = false;
		richTextBox15->Visible = true;
		lblMembers15->Visible = true;
		lblName16->Visible = false;
		label16->Visible = false;
		richTextBox16->Visible = true;
		lblMembers16->Visible = true;
	}
	else {
		// If the RichTextBoxes are visible, hide them and show the labels again
		lblName1->Visible = true;
		label1->Visible = true;
		richTextBox1->Visible = false;
		lblMembers1->Visible = false;
		lblName2->Visible = true;
		label2->Visible = true;
		richTextBox2->Visible = false;
		lblMembers2->Visible = false;
		lblName3->Visible = true;
		label3->Visible = true;
		richTextBox3->Visible = false;
		lblMembers3->Visible = false;
		lblName4->Visible = true;
		label4->Visible = true;
		richTextBox4->Visible = false;
		lblMembers4->Visible = false;
		lblName5->Visible = true;
		label5->Visible = true;
		richTextBox5->Visible = false;
		lblMembers5->Visible = false;
		lblName6->Visible = true;
		label6->Visible = true;
		richTextBox6->Visible = false;
		lblMembers6->Visible = false;
		lblName7->Visible = true;
		label7->Visible = true;
		richTextBox7->Visible = false;
		lblMembers7->Visible = false;
		lblName8->Visible = true;
		label8->Visible = true;
		richTextBox8->Visible = false;
		lblMembers8->Visible = false;
		lblName9->Visible = true;
		label9->Visible = true;
		richTextBox9->Visible = false;
		lblMembers9->Visible = false;
		lblName10->Visible = true;
		label10->Visible = true;
		richTextBox10->Visible = false;
		lblMembers10->Visible = false;
		lblName11->Visible = true;
		label11->Visible = true;
		richTextBox11->Visible = false;
		lblMembers11->Visible = false;
		lblName12->Visible = true;
		label12->Visible = true;
		richTextBox12->Visible = false;
		lblMembers12->Visible = false;
		lblName13->Visible = true;
		label13->Visible = true;
		richTextBox13->Visible = false;
		lblMembers13->Visible = false;
		lblName14->Visible = true;
		label14->Visible = true;
		richTextBox14->Visible = false;
		lblMembers14->Visible = false;
		lblName15->Visible = true;
		label15->Visible = true;
		richTextBox15->Visible = false;
		lblMembers15->Visible = false;
		lblName16->Visible = true;
		label16->Visible = true;
		richTextBox16->Visible = false;
		lblMembers16->Visible = false;
	}
}
};
}
