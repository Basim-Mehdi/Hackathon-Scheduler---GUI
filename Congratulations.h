#pragma once

namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Congratulations
	/// </summary>
	public ref class Congratulations : public System::Windows::Forms::Form
	{
	public:
		Congratulations(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Congratulations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ BtnClose;
	public: System::Windows::Forms::Label^ label;
	public: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Congratulations::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BtnClose = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(66, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(641, 412);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// BtnClose
			// 
			this->BtnClose->BackColor = System::Drawing::Color::DimGray;
			this->BtnClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnClose->ForeColor = System::Drawing::Color::White;
			this->BtnClose->Location = System::Drawing::Point(307, 538);
			this->BtnClose->Name = L"BtnClose";
			this->BtnClose->Size = System::Drawing::Size(146, 54);
			this->BtnClose->TabIndex = 6;
			this->BtnClose->Text = L"Close";
			this->BtnClose->UseVisualStyleBackColor = false;
			this->BtnClose->Click += gcnew System::EventHandler(this, &Congratulations::BtnClose_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::White;
			this->label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(123, 459);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(21, 32);
			this->label->TabIndex = 7;
			this->label->Text = L".";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label->Click += gcnew System::EventHandler(this, &Congratulations::label_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 646);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(774, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"------------ Developed for Hackathon Enthusiasts | Version 1.0 -------------";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Congratulations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(771, 708);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->BtnClose);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Congratulations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Congratulations";
			this->Load += gcnew System::EventHandler(this, &Congratulations::Congratulations_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Congratulations_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
