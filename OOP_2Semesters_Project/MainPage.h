#include"RegisterationPage.h"
#include"AdminOptions.h"
#include "SuscribersPage.h"
#pragma once

namespace OOP2SemestersProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		bool flag = true;

		void loadDataofLibrary()
		{
			string temp;
			ifstream data;
			int tempraryConversion;
			data.open("Stored_Data/Library.txt");
			for (int i = 0; i < 100; i++)
			{
				if (data.eof())
					break;
				

				getline(data, temp, ',');
				dataOfgui[i].setLibraryID(temp);
				getline(data, temp, '\n');
				dataOfgui[i].setLibraryName(temp);
			}
			data.close();
		}
		void loadDataofItems()
		{
			int tempraryConversion;
			ifstream data;
			string temp;
			data.open("Stored_Data/Items.txt");
			for (int i = 0; i < 100; i++)
			{
				if (data.eof())
				break;
				

				getline(data, temp, ',');
				dataOfgui[i].set_Itom_ID(temp);
				getline(data, temp, ',');
				dataOfgui[i].setLibraryID(temp);
				dataOfgui[i].set_Temp_Library_ID(temp);
				getline(data, temp, ',');
				dataOfgui[i].set_Category(temp);
				getline(data, temp, ',');
				dataOfgui[i].set_Title(temp);
				getline(data, temp, ',');
				dataOfgui[i].set_Author(temp);
				getline(data, temp, ',');
				dataOfgui[i].set_Publisher(temp);
				data >> tempraryConversion;
				data.ignore(1, ',');
				dataOfgui[i].set_production_year(tempraryConversion);
				getline(data, temp, ',');
				dataOfgui[i].set_Status(temp);
				data >> tempraryConversion;
				dataOfgui[i].set_Copies(tempraryConversion);
				data.ignore(1, '\n');
			}
			data.close();
		}

		void loadDataofSuscribers()
		{
			ifstream data;
			string temp;
			data.open("Stored_Data/subscribers.txt");
			for (int i = 0; i < 100; i++)
			{
				if (data.eof())
					break;
				
				
				getline(data, temp, ',');
				dataOfgui[i].setSuscriberid(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getSuscriberid().c_str()));
				getline(data, temp, ',');
				dataOfgui[i].setSuscribertype(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getSuscribertype().c_str()));
				getline(data, temp, ',');
				dataOfgui[i].setSuscribername(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getSuscribername().c_str()));
				getline(data, temp, ',');
				dataOfgui[i].setAdress(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getAdress().c_str()));
				getline(data, temp, ',');
				dataOfgui[i].setPhonenumber(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getPhonenumber().c_str()));
				getline(data, temp, '\n');
				dataOfgui[i].setEmail(temp);
				//MessageBox::Show(gcnew String(dataOfgui[i].getEmail().c_str()));
			}
			data.close();
		}
		void loadDataofBorrowing()
		{
			ifstream data;
			string temp;
			date tempDate;
			int tempraryConversion;
			data.open("Stored_Data/Borrowing.txt");
			for (int i = 0; i < 100; i++)
			{
				if (data.eof())
					break;
				

				getline(data, temp, ',');
				dataOfgui[i].setBorrowedSuscriberId(temp);
				data >> tempDate.day;
				data.ignore(1, '-');
				data >> tempDate.month;
				data.ignore(1, '-');
				data >> tempDate.year;
				data.ignore(1, ',');
				dataOfgui[i].setBorrowdate(tempDate);
				getline(data, temp, ',');
				dataOfgui[i].setBorrowedItemId(temp);
				data>>tempDate.day;
				data.ignore(1, '-');
				data >> tempDate.month;
				data.ignore(1, '-');
				data >> tempDate.year;
				data.ignore(1, ',');
				dataOfgui[i].setReturndate(tempDate);
				double tempFee = 0;
				data >> tempFee;
				data.ignore(1, '\n');
				dataOfgui[i].setFee(tempFee);
			}
			data.close();
		}
		void saveLibrarydata()
		{
			ofstream library;
			library.open("Stored_Data/Library.txt");
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].getLibraryID() != "\0" && dataOfgui[i].getLibraryName() != "\0")
				{
					library << dataOfgui[i].getLibraryID() << ",";
					library << dataOfgui[i].getLibraryName() << "\n";
				}

			}
			library.close();
		}

		void saveItemdata()
		{
			ofstream item;
			item.open("Stored_Data/Items.txt");
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].get_Itom_ID() != "\0")
				{
					item << dataOfgui[i].get_Itom_ID() << ",";
					item << dataOfgui[i].get_Temp_Library_ID()<<",";
					item << dataOfgui[i].get_Category() << ",";
					item << dataOfgui[i].get_Title() << ",";
					item << dataOfgui[i].get_Author() << ",";
					item << dataOfgui[i].get_Publisher() << ",";
					item << dataOfgui[i].get_production_year() << ",";
					item << dataOfgui[i].get_Status() << ",";
					item << dataOfgui[i].get_Copies() << "\n";
				}
			}
			item.close();
		}
		void SaveDataofSuscribers()
		{
			ofstream subs;
			subs.open("Stored_Data/subscribers.txt");
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].getSuscriberid() != "\0")
				{
					subs << dataOfgui[i].getSuscriberid() << ",";
					subs << dataOfgui[i].getSuscribertype() << ",";
					subs << dataOfgui[i].getSuscribername() << ",";
					subs << dataOfgui[i].getAdress() << ",";
					subs << dataOfgui[i].getPhonenumber() << ",";
					subs << dataOfgui[i].getEmail() << "\n";
				}
			}
			
			subs.close();
		}
		void saveBorrowedData()
		{
			ofstream borrow;
			borrow.open("Stored_Data/Borrowing.txt");
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].getBorrowedSuscriberId() != "\0")
				{
					borrow << dataOfgui[i].getBorrowedSuscriberId() << ",";
					borrow << dataOfgui[i].getBorrowDate().day << "-" << dataOfgui[i].getBorrowDate().month << "-" << dataOfgui[i].getBorrowDate().year << ",";
					borrow << dataOfgui[i].getBorrowedItemId() << ",";
					borrow << dataOfgui[i].getReturnDate().day << "-" << dataOfgui[i].getReturnDate().month << "-" << dataOfgui[i].getReturnDate().year;
					borrow << ",";
					borrow << dataOfgui[i].getFee();
					borrow << "\n";
				}
			}
			borrow.close();
		}
		MainPage(void)
		{
				InitializeComponent();
			if (flag)
			{
				loadDataofLibrary();
				loadDataofItems();
				loadDataofSuscribers();
				loadDataofBorrowing();
				flag = false;
			}
				//AdminLogin->Hide();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ AdminLogin;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->AdminLogin = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AdminLogin->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(72, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Login as an Admin";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(72, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(274, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Login as a Suscriber";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(72, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Register as a Suscriber";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainPage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 19, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(72, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(274, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"End";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainPage::button4_Click);
			// 
			// AdminLogin
			// 
			this->AdminLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdminLogin.BackgroundImage")));
			this->AdminLogin->Controls->Add(this->panel1);
			this->AdminLogin->Controls->Add(this->button6);
			this->AdminLogin->Controls->Add(this->checkBox1);
			this->AdminLogin->Controls->Add(this->label2);
			this->AdminLogin->Controls->Add(this->button5);
			this->AdminLogin->Controls->Add(this->panel2);
			this->AdminLogin->Controls->Add(this->textBox1);
			this->AdminLogin->Controls->Add(this->label1);
			this->AdminLogin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdminLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->AdminLogin->Location = System::Drawing::Point(0, 0);
			this->AdminLogin->Name = L"AdminLogin";
			this->AdminLogin->Size = System::Drawing::Size(984, 461);
			this->AdminLogin->TabIndex = 5;
			this->AdminLogin->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainPage::AdminLogin_Paint);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(984, 461);
			this->panel1->TabIndex = 7;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Tomato;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(627, 278);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(198, 54);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Getting Started";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainPage::button7_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 38, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(144, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(732, 59);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Library Management System";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button6->Location = System::Drawing::Point(52, 328);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 45);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainPage::button6_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->checkBox1->Location = System::Drawing::Point(52, 258);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(147, 25);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"keep me sign in ";
			this->checkBox1->UseVisualStyleBackColor = false;
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
			this->label2->Size = System::Drawing::Size(317, 37);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enters Admin\'s Password";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button5->Location = System::Drawing::Point(259, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 45);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Log In";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainPage::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(52, 234);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(327, 2);
			this->panel2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(52, 188);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(325, 45);
			this->textBox1->TabIndex = 1;
			this->textBox1->TabStop = false;
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
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// MainPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->AdminLogin);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->AdminLogin->ResumeLayout(false);
			this->AdminLogin->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		saveLibrarydata();
		saveItemdata();
		SaveDataofSuscribers();
		saveBorrowedData();
		Application::Exit();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminLogin->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text == "I'm Admin")
	{
		MessageBox::Show("Welcome Admin", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();

		AdminOptions ^AdminAcessPage = gcnew AdminOptions(this);
		AdminLogin->Hide();
		AdminAcessPage->ShowDialog();
	}
	else
	{
		MessageBox::Show("Incorrect Admin Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminLogin->Hide();
}
private: System::Void AdminLogin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	SuscribersPage^ suscriberForm = gcnew SuscribersPage(this);
	suscriberForm->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RegisterationPage^ registerationPage = gcnew RegisterationPage(this);
	AdminLogin->Hide();
	registerationPage->ShowDialog();
}

private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	AdminLogin->Hide();
}
};
}
