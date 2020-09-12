#pragma once
#include <msclr\marshal_cppstd.h>
#include"SuscribersOptionPage.h"
#include"objDeclerationFile.h"
#include "suscriberIdportableString.h"

namespace OOP2SemestersProject {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SuscribersPage
	/// </summary>
	public ref class SuscribersPage : public System::Windows::Forms::Form
	{
	public:
		Form^ MainPageForm;
		SuscribersPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SuscribersPage(Form^ tempForm)
		{
			MainPageForm = tempForm;
			InitializeComponent();
			ResetIDPage1->Hide();
			ResetIdPage2->Hide();
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].getBorrowedSuscriberId() != "\0")
				{
					time_t t = time(NULL);
					tm currentTime;
					localtime_s(&currentTime, &t);
					unsigned int returnDay = 0;
					returnDay = ((currentTime.tm_year + 1900) - dataOfgui[i].getBorrowDate().year) * 365;
					returnDay = returnDay - round(static_cast<unsigned>(((currentTime.tm_mon + 1)
						- static_cast<int>(dataOfgui[i].getBorrowDate().month)) * 30.5));
					returnDay = returnDay - static_cast<unsigned>(currentTime.tm_mday - dataOfgui[i].getBorrowDate().day);

					if ((dataOfgui[i].getSuscribertype() == "Regular" || dataOfgui[i].getSuscribertype() == "regular" ||
						dataOfgui[i].getSuscribertype() == "REGULAR") && returnDay > 30)
					{
						dataOfgui[i].setFee(50.0);
					}

					else if ((dataOfgui[i].getSuscribertype() == "Golden" || dataOfgui[i].getSuscribertype() == "golden" ||
						dataOfgui[i].getSuscribertype() == "GOLDEN") && returnDay > 90)
					{
						dataOfgui[i].setFee(90.0);
					}

					else
						dataOfgui[i].setFee(0);

				}
			}
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SuscribersPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ SuscriberPassword;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ ResetIDPage1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ ResetPassPhoneNumber;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ ResetIdPage2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ResetPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SuscribersPage::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuscriberPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ResetIDPage1 = (gcnew System::Windows::Forms::Panel());
			this->ResetIdPage2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ResetPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ResetPassPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ResetIDPage1->SuspendLayout();
			this->ResetIdPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->Location = System::Drawing::Point(47, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(451, 37);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enters Your Suscriber ID to continue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 65);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Welcome";
			// 
			// SuscriberPassword
			// 
			this->SuscriberPassword->BackColor = System::Drawing::Color::Black;
			this->SuscriberPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SuscriberPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->SuscriberPassword->Location = System::Drawing::Point(54, 195);
			this->SuscriberPassword->Multiline = true;
			this->SuscriberPassword->Name = L"SuscriberPassword";
			this->SuscriberPassword->PasswordChar = '*';
			this->SuscriberPassword->Size = System::Drawing::Size(423, 45);
			this->SuscriberPassword->TabIndex = 7;
			this->SuscriberPassword->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(52, 240);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(425, 2);
			this->panel2->TabIndex = 8;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->checkBox1->Location = System::Drawing::Point(52, 258);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(168, 29);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"keep me sign in ";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(345, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 28);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Reset Id";
			this->label3->Click += gcnew System::EventHandler(this, &SuscribersPage::label3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button5->Location = System::Drawing::Point(52, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 45);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SuscribersPage::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(259, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 45);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SuscribersPage::button1_Click);
			// 
			// ResetIDPage1
			// 
			this->ResetIDPage1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ResetIDPage1->Controls->Add(this->ResetIdPage2);
			this->ResetIDPage1->Controls->Add(this->button2);
			this->ResetIDPage1->Controls->Add(this->panel3);
			this->ResetIDPage1->Controls->Add(this->ResetPassPhoneNumber);
			this->ResetIDPage1->Controls->Add(this->label5);
			this->ResetIDPage1->Controls->Add(this->label4);
			this->ResetIDPage1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ResetIDPage1->Location = System::Drawing::Point(578, 114);
			this->ResetIDPage1->Name = L"ResetIDPage1";
			this->ResetIDPage1->Size = System::Drawing::Size(395, 353);
			this->ResetIDPage1->TabIndex = 13;
			// 
			// ResetIdPage2
			// 
			this->ResetIdPage2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ResetIdPage2->Controls->Add(this->button3);
			this->ResetIdPage2->Controls->Add(this->panel4);
			this->ResetIdPage2->Controls->Add(this->ResetPassword);
			this->ResetIdPage2->Controls->Add(this->label6);
			this->ResetIdPage2->Controls->Add(this->label7);
			this->ResetIdPage2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ResetIdPage2->Location = System::Drawing::Point(0, 0);
			this->ResetIdPage2->Name = L"ResetIdPage2";
			this->ResetIdPage2->Size = System::Drawing::Size(395, 353);
			this->ResetIdPage2->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(134, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 39);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SuscribersPage::button3_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(8, 177);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(324, 3);
			this->panel4->TabIndex = 3;
			// 
			// ResetPassword
			// 
			this->ResetPassword->BackColor = System::Drawing::Color::Black;
			this->ResetPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResetPassword->ForeColor = System::Drawing::SystemColors::Info;
			this->ResetPassword->Location = System::Drawing::Point(8, 142);
			this->ResetPassword->Multiline = true;
			this->ResetPassword->Name = L"ResetPassword";
			this->ResetPassword->Size = System::Drawing::Size(324, 35);
			this->ResetPassword->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(12, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(253, 30);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Enter New Suscriber\'s Id";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(70, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(252, 37);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Reset Suscriber\'s Id";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(134, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SuscribersPage::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(8, 177);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(324, 3);
			this->panel3->TabIndex = 3;
			// 
			// ResetPassPhoneNumber
			// 
			this->ResetPassPhoneNumber->BackColor = System::Drawing::Color::Black;
			this->ResetPassPhoneNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResetPassPhoneNumber->ForeColor = System::Drawing::SystemColors::Info;
			this->ResetPassPhoneNumber->Location = System::Drawing::Point(8, 142);
			this->ResetPassPhoneNumber->Multiline = true;
			this->ResetPassPhoneNumber->Name = L"ResetPassPhoneNumber";
			this->ResetPassPhoneNumber->Size = System::Drawing::Size(324, 35);
			this->ResetPassPhoneNumber->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(3, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(356, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Enter Your Phone Number to Reset Id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(70, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(252, 37);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Reset Suscriber\'s Id";
			// 
			// SuscribersPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->ResetIDPage1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->SuscriberPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuscribersPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SuscribersPage";
			this->Load += gcnew System::EventHandler(this, &SuscribersPage::SuscribersPage_Load);
			this->ResetIDPage1->ResumeLayout(false);
			this->ResetIDPage1->PerformLayout();
			this->ResetIdPage2->ResumeLayout(false);
			this->ResetIdPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MainPageForm->Show();
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetIDPage1->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = marshal_as<std::string>(ResetPassPhoneNumber->Text);
	int counter = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ResetPassPhoneNumber->Text == "" || ResetPassPhoneNumber->Text == " ")
		{
			MessageBox::Show("You may left this feild empty make sure to fill it with Your Register Phone Number"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		else if (dataOfgui[i].getPhonenumber() == tempStr)
		{
			ResetIdPage2->Show();
			break;
		}
		else
			counter++;
	}
	if (counter == 100)
	{
		MessageBox::Show("Phone Number not found make it Sure You are a Register User or Register First"
			, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//ResetPassword
	std::string tempStr = marshal_as<std::string>(ResetPassPhoneNumber->Text);
	
	for (int i = 0; i < 100; i++)
	{
		if (ResetPassword->Text == "" || ResetPassword->Text == " ")
		{
			MessageBox::Show("You may left this feild empty make sure to fill it with the ID you want to set"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (dataOfgui[i].getPhonenumber() == tempStr)
		{
			MessageBox::Show("Suscriber's Id Reset Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			dataOfgui[i].setSuscriberid(marshal_as<std::string>(ResetPassword->Text));
			ResetIDPage1->Hide();
			ResetIdPage2->Hide();
			break;
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string tempStr = marshal_as<std::string>(SuscriberPassword->Text);
	userPasswordforBorrowingitems = marshal_as<std::string>(SuscriberPassword->Text);
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (SuscriberPassword->Text == "" || SuscriberPassword->Text == " ")
		{
			MessageBox::Show("You may left password feild empty"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		else if (dataOfgui[i].getSuscriberid() == tempStr)
		{
			MessageBox::Show("Welcome"+ gcnew String(dataOfgui[i].getSuscribername().c_str()), "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			ResetIDPage1->Hide();
			ResetIdPage2->Hide();
			SuscribersOptionPage^ suscribersOption = gcnew SuscribersOptionPage(this);
			suscribersOption->ShowDialog();
			break;
		}
		else
			counter++;
	}
	if (counter == 100)
	{
		MessageBox::Show("Wrong Id Make Sure You enter right ID or register first to Login"
			, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void SuscribersPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
