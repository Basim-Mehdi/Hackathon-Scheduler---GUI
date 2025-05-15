#pragma once

#include "ManageTeams.h"

namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Schedule
	/// </summary>
	public ref class Schedule : public System::Windows::Forms::Form
	{
	public:
		Schedule(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			ClockTimer->Start(); // For the Clock that I've Used (Timer interval is 1000ms equal
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Schedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::PictureBox^ Minimize_PictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox3;








	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::Panel^ pnlFinal;
	private: System::Windows::Forms::Panel^ pnlSemi;

	private: System::Windows::Forms::Panel^ pnlQuarter;
	private: System::Windows::Forms::Panel^ pnlGroupStage;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblGroupStage8;

	private: System::Windows::Forms::Label^ lblGroupStage7;

	private: System::Windows::Forms::Label^ lblGroupStage6;

	private: System::Windows::Forms::Label^ lblGroupStage5;

	private: System::Windows::Forms::Label^ lblGroupStage4;

	private: System::Windows::Forms::Label^ lblGroupStage3;

	private: System::Windows::Forms::Label^ lblGroupStage2;

	private: System::Windows::Forms::Label^ lblGroupStage1;
	private: System::Windows::Forms::Label^ lblFinal;


	private: System::Windows::Forms::Label^ lblSemi2;

	private: System::Windows::Forms::Label^ lblSemi1;

	private: System::Windows::Forms::Label^ lblQuarter4;

	private: System::Windows::Forms::Label^ lblQuarter3;

	private: System::Windows::Forms::Label^ lblQuarter2;

	private: System::Windows::Forms::Label^ lblQuarter1;
	private: System::Windows::Forms::Panel^ pnlGroups;



	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ lblTeam8GroupB;

	private: System::Windows::Forms::Label^ lblTeam7GroupB;

	private: System::Windows::Forms::Label^ lblTeam6GroupB;

	private: System::Windows::Forms::Label^ lblTeam5GroupB;

	private: System::Windows::Forms::Label^ lblTeam4GroupB;

	private: System::Windows::Forms::Label^ lblTeam3GroupB;

	private: System::Windows::Forms::Label^ lblTeam2GroupB;

	private: System::Windows::Forms::Label^ lblTeam1GroupB;

	private: System::Windows::Forms::Label^ lblTeam8GroupA;

	private: System::Windows::Forms::Label^ lblTeam7GroupA;

	private: System::Windows::Forms::Label^ lblTeam6GroupA;

	private: System::Windows::Forms::Label^ lblTeam5GroupA;

	private: System::Windows::Forms::Label^ lblTeam4GroupA;

	private: System::Windows::Forms::Label^ lblTeam3GroupA;

	private: System::Windows::Forms::Label^ lblTeam2GroupA;

	private: System::Windows::Forms::Label^ lblTeam1GroupA;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Label^ ClockLabel;
private: System::Windows::Forms::Label^ DataLabel;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ ClosePictureBox;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Timer^ ClockTimer;
private: System::ComponentModel::IContainer^ components;




	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Schedule::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->Minimize_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ClosePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->DataLabel = (gcnew System::Windows::Forms::Label());
			this->ClockLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->pnlFinal = (gcnew System::Windows::Forms::Panel());
			this->lblFinal = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnlSemi = (gcnew System::Windows::Forms::Panel());
			this->lblSemi2 = (gcnew System::Windows::Forms::Label());
			this->lblSemi1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlQuarter = (gcnew System::Windows::Forms::Panel());
			this->lblQuarter4 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter3 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter2 = (gcnew System::Windows::Forms::Label());
			this->lblQuarter1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlGroupStage = (gcnew System::Windows::Forms::Panel());
			this->lblGroupStage8 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage7 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage6 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage5 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage4 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage3 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage2 = (gcnew System::Windows::Forms::Label());
			this->lblGroupStage1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlGroups = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->lblTeam8GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam7GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam6GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam5GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam4GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam3GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam2GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam1GroupB = (gcnew System::Windows::Forms::Label());
			this->lblTeam8GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam7GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam6GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam5GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam4GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam3GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam2GroupA = (gcnew System::Windows::Forms::Label());
			this->lblTeam1GroupA = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->ClockTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClosePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->pnlMain->SuspendLayout();
			this->pnlFinal->SuspendLayout();
			this->pnlSemi->SuspendLayout();
			this->pnlQuarter->SuspendLayout();
			this->pnlGroupStage->SuspendLayout();
			this->pnlGroups->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Location = System::Drawing::Point(354, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(519, 65);
			this->lblTitle->TabIndex = 52;
			this->lblTitle->Text = L"Tournament Schedule";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTitle->Click += gcnew System::EventHandler(this, &Schedule::lblTitle_Click);
			// 
			// Minimize_PictureBox
			// 
			this->Minimize_PictureBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Minimize_PictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minimize_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize_PictureBox.Image")));
			this->Minimize_PictureBox->Location = System::Drawing::Point(1102, 9);
			this->Minimize_PictureBox->Name = L"Minimize_PictureBox";
			this->Minimize_PictureBox->Size = System::Drawing::Size(65, 65);
			this->Minimize_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Minimize_PictureBox->TabIndex = 53;
			this->Minimize_PictureBox->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1173, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(63, 65);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 54;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->ClosePictureBox);
			this->panel1->Controls->Add(this->DataLabel);
			this->panel1->Controls->Add(this->ClockLabel);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->lblTitle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1258, 99);
			this->panel1->TabIndex = 56;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1129, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 58;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Schedule::pictureBox1_Click);
			// 
			// ClosePictureBox
			// 
			this->ClosePictureBox->BackColor = System::Drawing::Color::White;
			this->ClosePictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClosePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClosePictureBox.Image")));
			this->ClosePictureBox->Location = System::Drawing::Point(1201, 0);
			this->ClosePictureBox->Name = L"ClosePictureBox";
			this->ClosePictureBox->Size = System::Drawing::Size(54, 65);
			this->ClosePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ClosePictureBox->TabIndex = 57;
			this->ClosePictureBox->TabStop = false;
			this->ClosePictureBox->Click += gcnew System::EventHandler(this, &Schedule::ClosePictureBox_Click);
			// 
			// DataLabel
			// 
			this->DataLabel->AutoSize = true;
			this->DataLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataLabel->ForeColor = System::Drawing::Color::Black;
			this->DataLabel->Location = System::Drawing::Point(89, 0);
			this->DataLabel->Name = L"DataLabel";
			this->DataLabel->Size = System::Drawing::Size(55, 28);
			this->DataLabel->TabIndex = 55;
			this->DataLabel->Text = L"Date";
			// 
			// ClockLabel
			// 
			this->ClockLabel->AutoSize = true;
			this->ClockLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClockLabel->ForeColor = System::Drawing::Color::Black;
			this->ClockLabel->Location = System::Drawing::Point(82, 64);
			this->ClockLabel->Name = L"ClockLabel";
			this->ClockLabel->Size = System::Drawing::Size(87, 38);
			this->ClockLabel->TabIndex = 54;
			this->ClockLabel->Text = L"Clock";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(83, 99);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 53;
			this->pictureBox9->TabStop = false;
			// 
			// pnlMain
			// 
			this->pnlMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pnlMain->Controls->Add(this->pnlFinal);
			this->pnlMain->Controls->Add(this->pnlSemi);
			this->pnlMain->Controls->Add(this->pnlQuarter);
			this->pnlMain->Controls->Add(this->pnlGroupStage);
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(0, 99);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(1258, 661);
			this->pnlMain->TabIndex = 58;
			// 
			// pnlFinal
			// 
			this->pnlFinal->BackColor = System::Drawing::Color::White;
			this->pnlFinal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlFinal->Controls->Add(this->lblFinal);
			this->pnlFinal->Controls->Add(this->label4);
			this->pnlFinal->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlFinal->Location = System::Drawing::Point(0, 531);
			this->pnlFinal->Name = L"pnlFinal";
			this->pnlFinal->Size = System::Drawing::Size(1258, 130);
			this->pnlFinal->TabIndex = 3;
			// 
			// lblFinal
			// 
			this->lblFinal->AutoSize = true;
			this->lblFinal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblFinal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFinal->ForeColor = System::Drawing::Color::Black;
			this->lblFinal->Location = System::Drawing::Point(0, 39);
			this->lblFinal->Name = L"lblFinal";
			this->lblFinal->Size = System::Drawing::Size(388, 23);
			this->lblFinal->TabIndex = 19;
			this->lblFinal->Text = L"Match-15: Winner of Match 13 vs Winner of Match 14.";
			this->lblFinal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 38);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Final";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlSemi
			// 
			this->pnlSemi->BackColor = System::Drawing::Color::White;
			this->pnlSemi->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlSemi->Controls->Add(this->lblSemi2);
			this->pnlSemi->Controls->Add(this->lblSemi1);
			this->pnlSemi->Controls->Add(this->label3);
			this->pnlSemi->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlSemi->ForeColor = System::Drawing::Color::Black;
			this->pnlSemi->Location = System::Drawing::Point(0, 420);
			this->pnlSemi->Name = L"pnlSemi";
			this->pnlSemi->Size = System::Drawing::Size(1258, 111);
			this->pnlSemi->TabIndex = 2;
			// 
			// lblSemi2
			// 
			this->lblSemi2->AutoSize = true;
			this->lblSemi2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblSemi2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi2->ForeColor = System::Drawing::Color::Black;
			this->lblSemi2->Location = System::Drawing::Point(3, 79);
			this->lblSemi2->Name = L"lblSemi2";
			this->lblSemi2->Size = System::Drawing::Size(392, 23);
			this->lblSemi2->TabIndex = 19;
			this->lblSemi2->Text = L"Match-14:  Winner of Match 11 vs Winner of Match 12.";
			this->lblSemi2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblSemi1
			// 
			this->lblSemi1->AutoSize = true;
			this->lblSemi1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblSemi1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSemi1->ForeColor = System::Drawing::Color::Black;
			this->lblSemi1->Location = System::Drawing::Point(3, 46);
			this->lblSemi1->Name = L"lblSemi1";
			this->lblSemi1->Size = System::Drawing::Size(383, 23);
			this->lblSemi1->TabIndex = 18;
			this->lblSemi1->Text = L"Match-13:  Winner of Match 9 vs Winner of Match 10.\r\n";
			this->lblSemi1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 38);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Semi Finals";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pnlQuarter
			// 
			this->pnlQuarter->BackColor = System::Drawing::Color::White;
			this->pnlQuarter->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlQuarter->Controls->Add(this->lblQuarter4);
			this->pnlQuarter->Controls->Add(this->lblQuarter3);
			this->pnlQuarter->Controls->Add(this->lblQuarter2);
			this->pnlQuarter->Controls->Add(this->lblQuarter1);
			this->pnlQuarter->Controls->Add(this->label2);
			this->pnlQuarter->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlQuarter->Location = System::Drawing::Point(0, 271);
			this->pnlQuarter->Name = L"pnlQuarter";
			this->pnlQuarter->Size = System::Drawing::Size(1258, 149);
			this->pnlQuarter->TabIndex = 1;
			// 
			// lblQuarter4
			// 
			this->lblQuarter4->AutoSize = true;
			this->lblQuarter4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblQuarter4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter4->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter4->Location = System::Drawing::Point(3, 116);
			this->lblQuarter4->Name = L"lblQuarter4";
			this->lblQuarter4->Size = System::Drawing::Size(374, 23);
			this->lblQuarter4->TabIndex = 16;
			this->lblQuarter4->Text = L"Match-12:  Winner of Match 7 vs Winner of Match 8.";
			this->lblQuarter4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuarter3
			// 
			this->lblQuarter3->AutoSize = true;
			this->lblQuarter3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblQuarter3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter3->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter3->Location = System::Drawing::Point(3, 91);
			this->lblQuarter3->Name = L"lblQuarter3";
			this->lblQuarter3->Size = System::Drawing::Size(374, 23);
			this->lblQuarter3->TabIndex = 18;
			this->lblQuarter3->Text = L"Match-11:  Winner of Match 5 vs Winner of Match 6.";
			this->lblQuarter3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuarter2
			// 
			this->lblQuarter2->AutoSize = true;
			this->lblQuarter2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblQuarter2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter2->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter2->Location = System::Drawing::Point(3, 66);
			this->lblQuarter2->Name = L"lblQuarter2";
			this->lblQuarter2->Size = System::Drawing::Size(374, 23);
			this->lblQuarter2->TabIndex = 17;
			this->lblQuarter2->Text = L"Match-10:  Winner of Match 3 vs Winner of Match 4.";
			this->lblQuarter2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuarter1
			// 
			this->lblQuarter1->AutoSize = true;
			this->lblQuarter1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblQuarter1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuarter1->ForeColor = System::Drawing::Color::Black;
			this->lblQuarter1->Location = System::Drawing::Point(3, 39);
			this->lblQuarter1->Name = L"lblQuarter1";
			this->lblQuarter1->Size = System::Drawing::Size(361, 23);
			this->lblQuarter1->TabIndex = 15;
			this->lblQuarter1->Text = L"Match-9: Winner of Match 1 vs Winner of Match 2.";
			this->lblQuarter1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 38);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Quarter Finals";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlGroupStage
			// 
			this->pnlGroupStage->BackColor = System::Drawing::Color::White;
			this->pnlGroupStage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlGroupStage->Controls->Add(this->lblGroupStage8);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage7);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage6);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage5);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage4);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage3);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage2);
			this->pnlGroupStage->Controls->Add(this->lblGroupStage1);
			this->pnlGroupStage->Controls->Add(this->label1);
			this->pnlGroupStage->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlGroupStage->Location = System::Drawing::Point(0, 0);
			this->pnlGroupStage->Name = L"pnlGroupStage";
			this->pnlGroupStage->Size = System::Drawing::Size(1258, 271);
			this->pnlGroupStage->TabIndex = 0;
			this->pnlGroupStage->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Schedule::pnlGroupSta_Paint);
			// 
			// lblGroupStage8
			// 
			this->lblGroupStage8->AutoSize = true;
			this->lblGroupStage8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage8->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage8->Location = System::Drawing::Point(1, 238);
			this->lblGroupStage8->Name = L"lblGroupStage8";
			this->lblGroupStage8->Size = System::Drawing::Size(68, 23);
			this->lblGroupStage8->TabIndex = 18;
			this->lblGroupStage8->Text = L"Match 8";
			this->lblGroupStage8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage7
			// 
			this->lblGroupStage7->AutoSize = true;
			this->lblGroupStage7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage7->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage7->Location = System::Drawing::Point(1, 211);
			this->lblGroupStage7->Name = L"lblGroupStage7";
			this->lblGroupStage7->Size = System::Drawing::Size(68, 23);
			this->lblGroupStage7->TabIndex = 17;
			this->lblGroupStage7->Text = L"Match 7";
			this->lblGroupStage7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage6
			// 
			this->lblGroupStage6->AutoSize = true;
			this->lblGroupStage6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage6->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage6->Location = System::Drawing::Point(1, 184);
			this->lblGroupStage6->Name = L"lblGroupStage6";
			this->lblGroupStage6->Size = System::Drawing::Size(68, 23);
			this->lblGroupStage6->TabIndex = 16;
			this->lblGroupStage6->Text = L"Match 6";
			this->lblGroupStage6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage5
			// 
			this->lblGroupStage5->AutoSize = true;
			this->lblGroupStage5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage5->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage5->Location = System::Drawing::Point(1, 157);
			this->lblGroupStage5->Name = L"lblGroupStage5";
			this->lblGroupStage5->Size = System::Drawing::Size(68, 23);
			this->lblGroupStage5->TabIndex = 15;
			this->lblGroupStage5->Text = L"Match 5";
			this->lblGroupStage5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage4
			// 
			this->lblGroupStage4->AutoSize = true;
			this->lblGroupStage4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage4->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage4->Location = System::Drawing::Point(1, 130);
			this->lblGroupStage4->Name = L"lblGroupStage4";
			this->lblGroupStage4->Size = System::Drawing::Size(247, 23);
			this->lblGroupStage4->TabIndex = 13;
			this->lblGroupStage4->Text = L"Match 2 -- Team Cat VS Team Dog";
			this->lblGroupStage4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage3
			// 
			this->lblGroupStage3->AutoSize = true;
			this->lblGroupStage3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage3->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage3->Location = System::Drawing::Point(3, 103);
			this->lblGroupStage3->Name = L"lblGroupStage3";
			this->lblGroupStage3->Size = System::Drawing::Size(247, 23);
			this->lblGroupStage3->TabIndex = 14;
			this->lblGroupStage3->Text = L"Match 2 -- Team Cat VS Team Dog";
			this->lblGroupStage3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage2
			// 
			this->lblGroupStage2->AutoSize = true;
			this->lblGroupStage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage2->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage2->Location = System::Drawing::Point(3, 76);
			this->lblGroupStage2->Name = L"lblGroupStage2";
			this->lblGroupStage2->Size = System::Drawing::Size(537, 23);
			this->lblGroupStage2->TabIndex = 13;
			this->lblGroupStage2->Text = L"Match: Team A vs Team B | Date & Time: 2024-12-15 14:00 | Status: Scheduled";
			this->lblGroupStage2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblGroupStage1
			// 
			this->lblGroupStage1->AutoSize = true;
			this->lblGroupStage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblGroupStage1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupStage1->ForeColor = System::Drawing::Color::Black;
			this->lblGroupStage1->Location = System::Drawing::Point(3, 49);
			this->lblGroupStage1->Name = L"lblGroupStage1";
			this->lblGroupStage1->Size = System::Drawing::Size(661, 23);
			this->lblGroupStage1->TabIndex = 12;
			this->lblGroupStage1->Text = L"Match: Team A vs Team B | Date & Time: 2024-12-15 14:00 | Status: Completed | Win"
				L"ner: Team A";
			this->lblGroupStage1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Group Stage\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlGroups
			// 
			this->pnlGroups->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlGroups->Controls->Add(this->pictureBox2);
			this->pnlGroups->Controls->Add(this->panel14);
			this->pnlGroups->Controls->Add(this->panel13);
			this->pnlGroups->Controls->Add(this->panel12);
			this->pnlGroups->Controls->Add(this->panel11);
			this->pnlGroups->Controls->Add(this->panel10);
			this->pnlGroups->Controls->Add(this->panel9);
			this->pnlGroups->Controls->Add(this->panel4);
			this->pnlGroups->Controls->Add(this->panel2);
			this->pnlGroups->Controls->Add(this->label13);
			this->pnlGroups->Controls->Add(this->label14);
			this->pnlGroups->Controls->Add(this->label15);
			this->pnlGroups->Controls->Add(this->label16);
			this->pnlGroups->Controls->Add(this->label17);
			this->pnlGroups->Controls->Add(this->label18);
			this->pnlGroups->Controls->Add(this->label19);
			this->pnlGroups->Controls->Add(this->label23);
			this->pnlGroups->Controls->Add(this->label11);
			this->pnlGroups->Controls->Add(this->label12);
			this->pnlGroups->Controls->Add(this->label8);
			this->pnlGroups->Controls->Add(this->label9);
			this->pnlGroups->Controls->Add(this->label10);
			this->pnlGroups->Controls->Add(this->label7);
			this->pnlGroups->Controls->Add(this->label6);
			this->pnlGroups->Controls->Add(this->label5);
			this->pnlGroups->Controls->Add(this->panel18);
			this->pnlGroups->Controls->Add(this->lblTeam8GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam7GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam6GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam5GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam4GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam3GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam2GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam1GroupB);
			this->pnlGroups->Controls->Add(this->lblTeam8GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam7GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam6GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam5GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam4GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam3GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam2GroupA);
			this->pnlGroups->Controls->Add(this->lblTeam1GroupA);
			this->pnlGroups->Controls->Add(this->label22);
			this->pnlGroups->Controls->Add(this->label21);
			this->pnlGroups->Controls->Add(this->panel8);
			this->pnlGroups->Controls->Add(this->panel7);
			this->pnlGroups->Controls->Add(this->panel6);
			this->pnlGroups->Controls->Add(this->panel5);
			this->pnlGroups->Controls->Add(this->panel16);
			this->pnlGroups->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlGroups->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlGroups->Location = System::Drawing::Point(879, 99);
			this->pnlGroups->Name = L"pnlGroups";
			this->pnlGroups->Size = System::Drawing::Size(379, 661);
			this->pnlGroups->TabIndex = 59;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(146, 485);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(129, 115);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 154;
			this->pictureBox2->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel14->Location = System::Drawing::Point(3, 413);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(410, 4);
			this->panel14->TabIndex = 153;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel13->Location = System::Drawing::Point(3, 365);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(410, 4);
			this->panel13->TabIndex = 152;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel12->Location = System::Drawing::Point(3, 314);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(410, 4);
			this->panel12->TabIndex = 151;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel11->Location = System::Drawing::Point(3, 264);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(410, 4);
			this->panel11->TabIndex = 150;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel10->Location = System::Drawing::Point(3, 210);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(410, 4);
			this->panel10->TabIndex = 149;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel9->Location = System::Drawing::Point(3, 160);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(410, 4);
			this->panel9->TabIndex = 148;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Location = System::Drawing::Point(3, 114);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(410, 4);
			this->panel4->TabIndex = 147;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Location = System::Drawing::Point(3, 469);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(410, 4);
			this->panel2->TabIndex = 146;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(201, 429);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 25);
			this->label13->TabIndex = 145;
			this->label13->Text = L"8-";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(201, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 25);
			this->label14->TabIndex = 144;
			this->label14->Text = L"7-";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(201, 327);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 25);
			this->label15->TabIndex = 143;
			this->label15->Text = L"6-";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(201, 279);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 25);
			this->label16->TabIndex = 142;
			this->label16->Text = L"5-";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(201, 228);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 25);
			this->label17->TabIndex = 141;
			this->label17->Text = L"4-";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(201, 176);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 25);
			this->label18->TabIndex = 140;
			this->label18->Text = L"3-";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(201, 125);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 25);
			this->label19->TabIndex = 139;
			this->label19->Text = L"2-";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(201, 76);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(26, 25);
			this->label23->TabIndex = 138;
			this->label23->Text = L"1-";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(3, 429);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 25);
			this->label11->TabIndex = 137;
			this->label11->Text = L"8-";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(3, 377);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 25);
			this->label12->TabIndex = 136;
			this->label12->Text = L"7-";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(3, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 25);
			this->label8->TabIndex = 135;
			this->label8->Text = L"6-";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(3, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 25);
			this->label9->TabIndex = 134;
			this->label9->Text = L"5-";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(3, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 25);
			this->label10->TabIndex = 133;
			this->label10->Text = L"4-";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 25);
			this->label7->TabIndex = 132;
			this->label7->Text = L"3-";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 25);
			this->label6->TabIndex = 131;
			this->label6->Text = L"2-";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 25);
			this->label5->TabIndex = 130;
			this->label5->Text = L"1-";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel18->Location = System::Drawing::Point(3, 49);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(410, 4);
			this->panel18->TabIndex = 129;
			// 
			// lblTeam8GroupB
			// 
			this->lblTeam8GroupB->AutoSize = true;
			this->lblTeam8GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam8GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam8GroupB->Location = System::Drawing::Point(229, 423);
			this->lblTeam8GroupB->Name = L"lblTeam8GroupB";
			this->lblTeam8GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam8GroupB->TabIndex = 128;
			this->lblTeam8GroupB->Text = L"Team 8";
			this->lblTeam8GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam7GroupB
			// 
			this->lblTeam7GroupB->AutoSize = true;
			this->lblTeam7GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam7GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam7GroupB->Location = System::Drawing::Point(229, 374);
			this->lblTeam7GroupB->Name = L"lblTeam7GroupB";
			this->lblTeam7GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam7GroupB->TabIndex = 127;
			this->lblTeam7GroupB->Text = L"Team 7";
			this->lblTeam7GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam6GroupB
			// 
			this->lblTeam6GroupB->AutoSize = true;
			this->lblTeam6GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam6GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam6GroupB->Location = System::Drawing::Point(229, 324);
			this->lblTeam6GroupB->Name = L"lblTeam6GroupB";
			this->lblTeam6GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam6GroupB->TabIndex = 126;
			this->lblTeam6GroupB->Text = L"Team 6";
			this->lblTeam6GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam5GroupB
			// 
			this->lblTeam5GroupB->AutoSize = true;
			this->lblTeam5GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam5GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam5GroupB->Location = System::Drawing::Point(229, 274);
			this->lblTeam5GroupB->Name = L"lblTeam5GroupB";
			this->lblTeam5GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam5GroupB->TabIndex = 125;
			this->lblTeam5GroupB->Text = L"Team 5";
			this->lblTeam5GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam4GroupB
			// 
			this->lblTeam4GroupB->AutoSize = true;
			this->lblTeam4GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam4GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam4GroupB->Location = System::Drawing::Point(228, 225);
			this->lblTeam4GroupB->Name = L"lblTeam4GroupB";
			this->lblTeam4GroupB->Size = System::Drawing::Size(78, 28);
			this->lblTeam4GroupB->TabIndex = 124;
			this->lblTeam4GroupB->Text = L"Team 4";
			this->lblTeam4GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam3GroupB
			// 
			this->lblTeam3GroupB->AutoSize = true;
			this->lblTeam3GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam3GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam3GroupB->Location = System::Drawing::Point(228, 172);
			this->lblTeam3GroupB->Name = L"lblTeam3GroupB";
			this->lblTeam3GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam3GroupB->TabIndex = 123;
			this->lblTeam3GroupB->Text = L"Team 3";
			this->lblTeam3GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam2GroupB
			// 
			this->lblTeam2GroupB->AutoSize = true;
			this->lblTeam2GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam2GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam2GroupB->Location = System::Drawing::Point(228, 122);
			this->lblTeam2GroupB->Name = L"lblTeam2GroupB";
			this->lblTeam2GroupB->Size = System::Drawing::Size(77, 28);
			this->lblTeam2GroupB->TabIndex = 122;
			this->lblTeam2GroupB->Text = L"Team 2";
			this->lblTeam2GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam1GroupB
			// 
			this->lblTeam1GroupB->AutoSize = true;
			this->lblTeam1GroupB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam1GroupB->ForeColor = System::Drawing::Color::White;
			this->lblTeam1GroupB->Location = System::Drawing::Point(229, 73);
			this->lblTeam1GroupB->Name = L"lblTeam1GroupB";
			this->lblTeam1GroupB->Size = System::Drawing::Size(74, 28);
			this->lblTeam1GroupB->TabIndex = 121;
			this->lblTeam1GroupB->Text = L"Team 1";
			this->lblTeam1GroupB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam8GroupA
			// 
			this->lblTeam8GroupA->AutoSize = true;
			this->lblTeam8GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam8GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam8GroupA->Location = System::Drawing::Point(35, 420);
			this->lblTeam8GroupA->Name = L"lblTeam8GroupA";
			this->lblTeam8GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam8GroupA->TabIndex = 120;
			this->lblTeam8GroupA->Text = L"Team 8";
			this->lblTeam8GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam7GroupA
			// 
			this->lblTeam7GroupA->AutoSize = true;
			this->lblTeam7GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam7GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam7GroupA->Location = System::Drawing::Point(35, 372);
			this->lblTeam7GroupA->Name = L"lblTeam7GroupA";
			this->lblTeam7GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam7GroupA->TabIndex = 119;
			this->lblTeam7GroupA->Text = L"Team 7";
			this->lblTeam7GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam6GroupA
			// 
			this->lblTeam6GroupA->AutoSize = true;
			this->lblTeam6GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam6GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam6GroupA->Location = System::Drawing::Point(35, 321);
			this->lblTeam6GroupA->Name = L"lblTeam6GroupA";
			this->lblTeam6GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam6GroupA->TabIndex = 118;
			this->lblTeam6GroupA->Text = L"Team 6";
			this->lblTeam6GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam5GroupA
			// 
			this->lblTeam5GroupA->AutoSize = true;
			this->lblTeam5GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam5GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam5GroupA->Location = System::Drawing::Point(36, 276);
			this->lblTeam5GroupA->Name = L"lblTeam5GroupA";
			this->lblTeam5GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam5GroupA->TabIndex = 117;
			this->lblTeam5GroupA->Text = L"Team 5";
			this->lblTeam5GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam4GroupA
			// 
			this->lblTeam4GroupA->AutoSize = true;
			this->lblTeam4GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam4GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam4GroupA->Location = System::Drawing::Point(35, 225);
			this->lblTeam4GroupA->Name = L"lblTeam4GroupA";
			this->lblTeam4GroupA->Size = System::Drawing::Size(78, 28);
			this->lblTeam4GroupA->TabIndex = 116;
			this->lblTeam4GroupA->Text = L"Team 4";
			this->lblTeam4GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam3GroupA
			// 
			this->lblTeam3GroupA->AutoSize = true;
			this->lblTeam3GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam3GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam3GroupA->Location = System::Drawing::Point(35, 172);
			this->lblTeam3GroupA->Name = L"lblTeam3GroupA";
			this->lblTeam3GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam3GroupA->TabIndex = 115;
			this->lblTeam3GroupA->Text = L"Team 3";
			this->lblTeam3GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam2GroupA
			// 
			this->lblTeam2GroupA->AutoSize = true;
			this->lblTeam2GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam2GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam2GroupA->Location = System::Drawing::Point(35, 121);
			this->lblTeam2GroupA->Name = L"lblTeam2GroupA";
			this->lblTeam2GroupA->Size = System::Drawing::Size(77, 28);
			this->lblTeam2GroupA->TabIndex = 114;
			this->lblTeam2GroupA->Text = L"Team 2";
			this->lblTeam2GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTeam1GroupA
			// 
			this->lblTeam1GroupA->AutoSize = true;
			this->lblTeam1GroupA->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTeam1GroupA->ForeColor = System::Drawing::Color::White;
			this->lblTeam1GroupA->Location = System::Drawing::Point(35, 72);
			this->lblTeam1GroupA->Name = L"lblTeam1GroupA";
			this->lblTeam1GroupA->Size = System::Drawing::Size(74, 28);
			this->lblTeam1GroupA->TabIndex = 113;
			this->lblTeam1GroupA->Text = L"Team 1";
			this->lblTeam1GroupA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(214, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(144, 38);
			this->label22->TabIndex = 112;
			this->label22->Text = L"Group - B";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(22, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(146, 38);
			this->label21->TabIndex = 111;
			this->label21->Text = L"Group - A";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(191, 449);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(4, 25);
			this->panel8->TabIndex = 110;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(191, 326);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(4, 125);
			this->panel7->TabIndex = 109;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(191, 220);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(4, 110);
			this->panel6->TabIndex = 108;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(191, 114);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(4, 115);
			this->panel5->TabIndex = 107;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Location = System::Drawing::Point(191, 8);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(4, 115);
			this->panel16->TabIndex = 106;
			// 
			// ClockTimer
			// 
			this->ClockTimer->Interval = 1000;
			this->ClockTimer->Tick += gcnew System::EventHandler(this, &Schedule::ClockTimer_Tick);
			// 
			// Schedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ClientSize = System::Drawing::Size(1258, 760);
			this->Controls->Add(this->pnlGroups);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->Minimize_PictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Schedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Schedule";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Minimize_PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClosePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->pnlMain->ResumeLayout(false);
			this->pnlFinal->ResumeLayout(false);
			this->pnlFinal->PerformLayout();
			this->pnlSemi->ResumeLayout(false);
			this->pnlSemi->PerformLayout();
			this->pnlQuarter->ResumeLayout(false);
			this->pnlQuarter->PerformLayout();
			this->pnlGroupStage->ResumeLayout(false);
			this->pnlGroupStage->PerformLayout();
			this->pnlGroups->ResumeLayout(false);
			this->pnlGroups->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ClosePictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Minimize the form
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void pictureBoxTeams_Click(System::Object^ sender, System::EventArgs^ e) {

	ManageTeams^ teams = gcnew ManageTeams();
	teams->ShowDialog();
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlGroupSta_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void ClockTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	// Update the ClockLabel text with the current time
	ClockLabel->Text = DateTime::Now.ToString("hh:mm:ss tt"); 	// Format the time as HH:mm:ss
	DataLabel->Text = DateTime::Now.ToString("dddd, MMMM dd, yyyy");
}
};
}
