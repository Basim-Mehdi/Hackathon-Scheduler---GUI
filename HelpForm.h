								// HelpForm.h


#pragma once

namespace SchedulerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::RichTextBox^ HelpInfoTextBox;

	private: System::Windows::Forms::Label^ Heading;

	private: System::Windows::Forms::PictureBox^ pictureBox3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->HelpInfoTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->Heading);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(840, 108);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(786, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 53);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &HelpForm::pictureBox3_Click);
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Heading->ForeColor = System::Drawing::Color::White;
			this->Heading->Location = System::Drawing::Point(187, 28);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(496, 48);
			this->Heading->TabIndex = 5;
			this->Heading->Text = L"Help - Hackathon Schedular";
			// 
			// HelpInfoTextBox
			// 
			this->HelpInfoTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->HelpInfoTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HelpInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelpInfoTextBox->ForeColor = System::Drawing::Color::White;
			this->HelpInfoTextBox->Location = System::Drawing::Point(0, 108);
			this->HelpInfoTextBox->Name = L"HelpInfoTextBox";
			this->HelpInfoTextBox->Size = System::Drawing::Size(840, 344);
			this->HelpInfoTextBox->TabIndex = 7;
			this->HelpInfoTextBox->Text = resources->GetString(L"HelpInfoTextBox.Text");
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ClientSize = System::Drawing::Size(840, 452);
			this->Controls->Add(this->HelpInfoTextBox);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HelpForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
