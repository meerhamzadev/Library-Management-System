#pragma once
#include <ctime>
#include <msclr/marshal_cppstd.h>
#include "ReturnPage.h"
#include "AvailableItemsPage.h"
#include "objDeclerationFile.h"
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
	/// Summary for SuscribersOptionPage
	/// </summary>
	public ref class SuscribersOptionPage : public System::Windows::Forms::Form
	{
	
	public:
		Form^ SuscriberForm;
		SuscribersOptionPage(void)
		{
			InitializeComponent();
			BorrowItem->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		SuscribersOptionPage(Form^ tempForm )
		{
			SuscriberForm = tempForm;
			InitializeComponent();
			BorrowItem->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SuscribersOptionPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ BorrowItem;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ BorrowItemId;

	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SuscribersOptionPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->BorrowItem = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->BorrowItemId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BorrowItem->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(227, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Suscriber\'s Panel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(289, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Borrow an Item";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Goldenrod;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(289, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 54);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Return an item";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(289, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 54);
			this->button3->TabIndex = 5;
			this->button3->Text = L"View Available Items";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Goldenrod;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(289, 378);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 54);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Back to Main Page";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button4_Click);
			// 
			// BorrowItem
			// 
			this->BorrowItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BorrowItem.BackgroundImage")));
			this->BorrowItem->Controls->Add(this->button6);
			this->BorrowItem->Controls->Add(this->button5);
			this->BorrowItem->Controls->Add(this->panel2);
			this->BorrowItem->Controls->Add(this->BorrowItemId);
			this->BorrowItem->Controls->Add(this->label2);
			this->BorrowItem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BorrowItem->Location = System::Drawing::Point(0, 0);
			this->BorrowItem->Name = L"BorrowItem";
			this->BorrowItem->Size = System::Drawing::Size(1000, 500);
			this->BorrowItem->TabIndex = 7;
			this->BorrowItem->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SuscribersOptionPage::BorrowItem_Paint);
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
			this->button6->TabIndex = 4;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button6_Click);
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
			this->button5->TabIndex = 3;
			this->button5->Text = L"Borrow";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SuscribersOptionPage::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(238, 248);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(540, 4);
			this->panel2->TabIndex = 2;
			// 
			// BorrowItemId
			// 
			this->BorrowItemId->Location = System::Drawing::Point(238, 194);
			this->BorrowItemId->Multiline = true;
			this->BorrowItemId->Name = L"BorrowItemId";
			this->BorrowItemId->Size = System::Drawing::Size(540, 55);
			this->BorrowItemId->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 32, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(106, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(792, 59);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter the Item\'s Id You Want to Borrow";
			// 
			// SuscribersOptionPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->BorrowItem);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuscribersOptionPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SuscribersOptionPage";
			this->Load += gcnew System::EventHandler(this, &SuscribersOptionPage::SuscribersOptionPage_Load);
			this->BorrowItem->ResumeLayout(false);
			this->BorrowItem->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		

#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BorrowItem->Hide();
		SuscriberForm->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	BorrowItem->Show();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = marshal_as<std::string>(BorrowItemId->Text);
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (BorrowItemId->Text == "" || BorrowItemId->Text == " ")
		{
			MessageBox::Show("You might left this feild empty make sure to fill it"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		else if (dataOfgui[i].get_Itom_ID() == tempStr && dataOfgui[i].get_Status() == "On the Shelf")
		{
			if (dataOfgui[i].get_Copies() <= 0)
			{
				dataOfgui[i].set_Status("Not Available");
			}
			else
			{
				int temp = dataOfgui[i].get_Copies();
				temp = --temp;
				temp = temp;
				dataOfgui[i].set_Copies(temp);
			}

			dataOfgui[i].setBorrowedItemId(dataOfgui[i].get_Itom_ID());
			dataOfgui[i].setBorrowedSuscriberId(userPasswordforBorrowingitems);
			
			
			date tempdate;
			time_t t = time(NULL);
			tm currentTime;
			localtime_s(&currentTime, &t);
			tempdate.day = currentTime.tm_mday;
			tempdate.month = currentTime.tm_mon + 1;
			tempdate.year = currentTime.tm_year + 1900;
			dataOfgui[i].setBorrowdate(tempdate);
			if (dataOfgui[i].getSuscribertype() == "Regular" || dataOfgui[i].getSuscribertype() == "regular"||
				dataOfgui[i].getSuscribertype() == "REGULAR" )
			{
				tempdate.month = currentTime.tm_mon + 2;
				dataOfgui[i].setReturndate(tempdate);
			}
			else if (dataOfgui[i].getSuscribertype() == "Golden" || dataOfgui[i].getSuscribertype() == "golden" ||
				dataOfgui[i].getSuscribertype() == "GOLDEN")
			{
				tempdate.month = currentTime.tm_mon + 4;
				dataOfgui[i].setReturndate(tempdate);
			}
			MessageBox::Show("Item alloted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			BorrowItem->Hide();
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
	BorrowItem->Hide();
}
private: System::Void SuscribersOptionPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BorrowItem->Hide();
	ReturnPage^ returnPageform = gcnew ReturnPage(this);
	returnPageform->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AvailableItemsPage^ availableItems = gcnew AvailableItemsPage(this);
	availableItems->ShowDialog();
}
private: System::Void BorrowItem_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}