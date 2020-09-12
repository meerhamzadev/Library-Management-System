#pragma once
#include<ctime>
#include<msclr/marshal_cppstd.h>
#include "objDeclerationFile.h"

namespace OOP2SemestersProject {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReturnPage
	/// </summary>
	public ref class ReturnPage : public System::Windows::Forms::Form
	{
	public:
		Form ^SuscriberOptionsPage;
		ReturnPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ReturnPage(Form ^tempForm)
		{
			SuscriberOptionsPage = tempForm;
			InitializeComponent();
			DuesSection->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReturnPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ReturnItemId;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ DuesSection;

	private: System::Windows::Forms::Label^ Fine;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ messageBox;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReturnPage::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ReturnItemId = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->DuesSection = (gcnew System::Windows::Forms::Panel());
			this->Fine = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->messageBox = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DuesSection->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 32, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(106, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(780, 59);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the Item\'s Id You Want to Return";
			// 
			// ReturnItemId
			// 
			this->ReturnItemId->Location = System::Drawing::Point(238, 194);
			this->ReturnItemId->Multiline = true;
			this->ReturnItemId->Name = L"ReturnItemId";
			this->ReturnItemId->Size = System::Drawing::Size(540, 55);
			this->ReturnItemId->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(238, 245);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(540, 4);
			this->panel2->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Blue;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(299, 305);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 52);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ReturnPage::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(571, 305);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 52);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Return";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ReturnPage::button5_Click);
			// 
			// DuesSection
			// 
			this->DuesSection->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->DuesSection->Controls->Add(this->Fine);
			this->DuesSection->Controls->Add(this->button1);
			this->DuesSection->Controls->Add(this->label3);
			this->DuesSection->Controls->Add(this->messageBox);
			this->DuesSection->Controls->Add(this->label1);
			this->DuesSection->Location = System::Drawing::Point(310, 119);
			this->DuesSection->Name = L"DuesSection";
			this->DuesSection->Size = System::Drawing::Size(374, 323);
			this->DuesSection->TabIndex = 7;
			// 
			// Fine
			// 
			this->Fine->AutoSize = true;
			this->Fine->BackColor = System::Drawing::Color::Transparent;
			this->Fine->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Fine->Location = System::Drawing::Point(239, 170);
			this->Fine->Name = L"Fine";
			this->Fine->Size = System::Drawing::Size(22, 32);
			this->Fine->TabIndex = 4;
			this->Fine->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(145, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReturnPage::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(28, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"We charged You: ";
			// 
			// messageBox
			// 
			this->messageBox->AutoSize = true;
			this->messageBox->BackColor = System::Drawing::Color::Transparent;
			this->messageBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->messageBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->messageBox->Location = System::Drawing::Point(3, 100);
			this->messageBox->Name = L"messageBox";
			this->messageBox->Size = System::Drawing::Size(19, 30);
			this->messageBox->TabIndex = 1;
			this->messageBox->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(75, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dues Section";
			// 
			// ReturnPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->DuesSection);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ReturnItemId);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReturnPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReturnPage";
			this->Load += gcnew System::EventHandler(this, &ReturnPage::ReturnPage_Load);
			this->DuesSection->ResumeLayout(false);
			this->DuesSection->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		std::string tempStr = marshal_as<std::string>(ReturnItemId->Text);
		int counter = 0;
		for (int i = 0; i < 100; i++)
		{
			if (ReturnItemId->Text == "" || ReturnItemId->Text == " ")
			{
				MessageBox::Show("You might left this feild empty make sure to fill it"
					, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}

			else if (dataOfgui[i].getBorrowedItemId() == tempStr)
			{
				dataOfgui[i].set_Status("On the Shelf");
				int temp = dataOfgui[i].get_Copies();
				temp = ++temp;
				temp = temp;
				dataOfgui[i].set_Copies(temp);
				dataOfgui[i].setBorrowedItemId("\0");
				dataOfgui[i].setBorrowedSuscriberId("\0");	
				DuesSection->Show();
				if (!dataOfgui[i].getFee())
				{
					messageBox->Text = "You return item on time";
					Fine->Text = "0 Rupee";
				}
				else
				{
					messageBox->Text = "You return this item Late";
					Fine->Text = System::Convert::ToString(dataOfgui[i].getFee()) + "Rupees";
				}

				date removingDate;
				removingDate.day = 0;
				removingDate.month = 0;
				removingDate.year = 0;
				dataOfgui[i].setBorrowdate(removingDate);
				dataOfgui[i].setReturndate(removingDate);
				break;
			}
			else
				counter++;

		}

		if (counter == 100)
		{
			MessageBox::Show("Item does not exist. Make Sure You enter right ID"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	SuscriberOptionsPage->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DuesSection->Hide();
	SuscriberOptionsPage->Show();
}
private: System::Void ReturnPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
