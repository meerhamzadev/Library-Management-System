#pragma once
#include "objDeclerationFile.h"
#include <msclr\marshal_cppstd.h>

namespace OOP2SemestersProject {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for RegisterationPage
	/// </summary>
	public ref class RegisterationPage : public System::Windows::Forms::Form
	{
	public:
		Form^ mainPageform;
		RegisterationPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RegisterationPage(Form^ tempForm)
		{
			mainPageform = tempForm;
			InitializeComponent();
			RegPanel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ RegPanel;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ RegSuscriberName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ RegSuscriberId;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ RegisterSuscriberEmail;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ RegSuscriberPhoneNumber;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ RegSuscriberAdress;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ suscriberType;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterationPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->RegPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->RegSuscriberAdress = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->RegisterSuscriberEmail = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->RegSuscriberPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->RegSuscriberName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->RegSuscriberId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->suscriberType = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->RegPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bodoni MT", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(14, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(813, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Here You can find lots of worthy stuff. A Place for ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(14, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(735, 47);
			this->label3->TabIndex = 2;
			this->label3->Text = L"to Get a Free Access of 100000+ Reading and";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterationPage::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(14, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(846, 47);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Reading lovers and Research Enthusiasts. Join Today";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterationPage::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(14, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(330, 47);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Research Resources";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterationPage::label5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(609, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 56);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Join Now";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterationPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(169, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 56);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterationPage::button2_Click);
			// 
			// RegPanel
			// 
			this->RegPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RegPanel.BackgroundImage")));
			this->RegPanel->Controls->Add(this->panel1);
			this->RegPanel->Controls->Add(this->suscriberType);
			this->RegPanel->Controls->Add(this->button3);
			this->RegPanel->Controls->Add(this->panel6);
			this->RegPanel->Controls->Add(this->RegSuscriberAdress);
			this->RegPanel->Controls->Add(this->label11);
			this->RegPanel->Controls->Add(this->panel5);
			this->RegPanel->Controls->Add(this->RegisterSuscriberEmail);
			this->RegPanel->Controls->Add(this->label10);
			this->RegPanel->Controls->Add(this->panel4);
			this->RegPanel->Controls->Add(this->RegSuscriberPhoneNumber);
			this->RegPanel->Controls->Add(this->label9);
			this->RegPanel->Controls->Add(this->label8);
			this->RegPanel->Controls->Add(this->panel3);
			this->RegPanel->Controls->Add(this->RegSuscriberName);
			this->RegPanel->Controls->Add(this->label7);
			this->RegPanel->Controls->Add(this->panel2);
			this->RegPanel->Controls->Add(this->RegSuscriberId);
			this->RegPanel->Controls->Add(this->label6);
			this->RegPanel->Cursor = System::Windows::Forms::Cursors::Default;
			this->RegPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegPanel->Location = System::Drawing::Point(0, 0);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(1000, 500);
			this->RegPanel->TabIndex = 7;
			this->RegPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegisterationPage::panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(389, 410);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 52);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RegisterationPage::button3_Click_1);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(585, 368);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(361, 3);
			this->panel6->TabIndex = 16;
			// 
			// RegSuscriberAdress
			// 
			this->RegSuscriberAdress->Location = System::Drawing::Point(585, 328);
			this->RegSuscriberAdress->Multiline = true;
			this->RegSuscriberAdress->Name = L"RegSuscriberAdress";
			this->RegSuscriberAdress->Size = System::Drawing::Size(361, 42);
			this->RegSuscriberAdress->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(578, 284);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(258, 41);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Enter Your Adress";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(22, 368);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(314, 3);
			this->panel5->TabIndex = 13;
			// 
			// RegisterSuscriberEmail
			// 
			this->RegisterSuscriberEmail->Location = System::Drawing::Point(22, 328);
			this->RegisterSuscriberEmail->Multiline = true;
			this->RegisterSuscriberEmail->Name = L"RegisterSuscriberEmail";
			this->RegisterSuscriberEmail->Size = System::Drawing::Size(312, 42);
			this->RegisterSuscriberEmail->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(15, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(242, 41);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Enter Your Email";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(585, 265);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(361, 3);
			this->panel4->TabIndex = 10;
			// 
			// RegSuscriberPhoneNumber
			// 
			this->RegSuscriberPhoneNumber->Location = System::Drawing::Point(585, 224);
			this->RegSuscriberPhoneNumber->Multiline = true;
			this->RegSuscriberPhoneNumber->Name = L"RegSuscriberPhoneNumber";
			this->RegSuscriberPhoneNumber->Size = System::Drawing::Size(361, 42);
			this->RegSuscriberPhoneNumber->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(578, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(375, 41);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Enter Your Phone Number";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(15, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(348, 41);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Choose a Suscriber Type";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(585, 148);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(361, 3);
			this->panel3->TabIndex = 5;
			// 
			// RegSuscriberName
			// 
			this->RegSuscriberName->Location = System::Drawing::Point(585, 106);
			this->RegSuscriberName->Multiline = true;
			this->RegSuscriberName->Name = L"RegSuscriberName";
			this->RegSuscriberName->Size = System::Drawing::Size(361, 42);
			this->RegSuscriberName->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(578, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(249, 41);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Enter Your Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(22, 145);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(405, 3);
			this->panel2->TabIndex = 2;
			// 
			// RegSuscriberId
			// 
			this->RegSuscriberId->Location = System::Drawing::Point(22, 104);
			this->RegSuscriberId->Multiline = true;
			this->RegSuscriberId->Name = L"RegSuscriberId";
			this->RegSuscriberId->Size = System::Drawing::Size(405, 42);
			this->RegSuscriberId->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(12, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(418, 41);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Enter an Id/Password For You";
			// 
			// suscriberType
			// 
			this->suscriberType->Location = System::Drawing::Point(22, 226);
			this->suscriberType->Multiline = true;
			this->suscriberType->Name = L"suscriberType";
			this->suscriberType->Size = System::Drawing::Size(312, 42);
			this->suscriberType->TabIndex = 18;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(22, 265);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(314, 3);
			this->panel1->TabIndex = 19;
			// 
			// RegisterationPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->RegPanel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterationPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterationPage";
			this->Load += gcnew System::EventHandler(this, &RegisterationPage::RegisterationPage_Load);
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void RegisterationPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	mainPageform->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RegPanel->Show();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	std::string tempStr = "\0";
	tempStr = marshal_as<std::string>(RegSuscriberId->Text);

	for (int i = 0; i < 100; i++)
	{
		if (RegSuscriberId->Text == "" || RegSuscriberName->Text == "" || RegisterSuscriberEmail->Text==""
			|| RegSuscriberPhoneNumber->Text == ""|| RegSuscriberAdress->Text == ""|| suscriberType->Text == "")
		{
			MessageBox::Show("You might left something empty make sure to fill all feilds with respective data"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (dataOfgui[i].getSuscriberid() == tempStr)
		{
			MessageBox::Show("This Id already Exist try a new Id"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (dataOfgui[i].getSuscriberid() == "\0")
		{
			dataOfgui[i].setSuscriberid(marshal_as<std::string>(RegSuscriberId->Text));
			string tempstr = marshal_as<std::string>(RegSuscriberName->Text);
			int counter = 0;
			
			for (int j = 0; j < tempstr.length(); j++)
			{
				if (isalpha(tempstr[j]) || isspace(tempstr[j]))
					counter++;
			}

			if (counter != tempstr.length())
			{
				MessageBox::Show("Name should only contain Alphabets no special characters or digits allowed"
					, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}

			dataOfgui[i].setSuscribername(tempstr);
			dataOfgui[i].setEmail(marshal_as<std::string>(RegisterSuscriberEmail->Text));
			dataOfgui[i].setPhonenumber(marshal_as<std::string>(RegSuscriberPhoneNumber->Text));
			dataOfgui[i].setAdress(marshal_as<std::string>(RegSuscriberAdress->Text));
			dataOfgui[i].setSuscribertype(marshal_as<std::string>(suscriberType->Text));
			MessageBox::Show("Register Successfuly"	, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			RegPanel->Hide();
			mainPageform->Show();
			break;
		}
	}
}
};
}
