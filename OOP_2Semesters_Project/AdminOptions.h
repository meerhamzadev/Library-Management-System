#pragma once
#include"UpadateItemPage.h"
#include"AddingItemsPage.h"


namespace OOP2SemestersProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminOptions
	/// </summary>

	public ref class AdminOptions : public System::Windows::Forms::Form
	{
	public:

	public:
		Form^ mainPageForm;
		DataTable^ overDueItems = gcnew DataTable();
		int indexCounter = 1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ DeletePage;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ DeleteItemId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:

		AdminOptions(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminOptions(Form ^tempForm)
		{
			mainPageForm = tempForm;
			InitializeComponent();
			DeletePage->Hide();
			dataGridView1->Hide();
			for (int i = 0; i < 100; i++)
			{
				if (dataOfgui[i].getFee())
					borrowedItemduesReport();
				
			}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminOptions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminOptions::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->DeletePage = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->DeleteItemId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DeletePage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 40, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(243, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 72);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Panel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(278, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add an item";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminOptions::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Goldenrod;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(278, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 54);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Update an item";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminOptions::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(278, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 54);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Delete an item";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminOptions::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Goldenrod;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(278, 375);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 54);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Back to Main Page";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminOptions::button4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::ForestGreen;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(655, 320);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(270, 54);
			this->button7->TabIndex = 9;
			this->button7->Text = L"View Overdues Report";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminOptions::button7_Click_1);
			// 
			// DeletePage
			// 
			this->DeletePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeletePage.BackgroundImage")));
			this->DeletePage->Controls->Add(this->button8);
			this->DeletePage->Controls->Add(this->dataGridView1);
			this->DeletePage->Controls->Add(this->button6);
			this->DeletePage->Controls->Add(this->button5);
			this->DeletePage->Controls->Add(this->panel2);
			this->DeletePage->Controls->Add(this->DeleteItemId);
			this->DeletePage->Controls->Add(this->label2);
			this->DeletePage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DeletePage->Location = System::Drawing::Point(0, 0);
			this->DeletePage->Name = L"DeletePage";
			this->DeletePage->Size = System::Drawing::Size(984, 461);
			this->DeletePage->TabIndex = 11;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Blue;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(385, 371);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(156, 54);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminOptions::button8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(984, 461);
			this->dataGridView1->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Blue;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(278, 296);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(185, 51);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminOptions::button6_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(545, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(185, 51);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Delete Item";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminOptions::button5_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(204, 250);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(593, 4);
			this->panel2->TabIndex = 2;
			// 
			// DeleteItemId
			// 
			this->DeleteItemId->Location = System::Drawing::Point(205, 192);
			this->DeleteItemId->Multiline = true;
			this->DeleteItemId->Name = L"DeleteItemId";
			this->DeleteItemId->Size = System::Drawing::Size(593, 58);
			this->DeleteItemId->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::LightYellow;
			this->label2->Location = System::Drawing::Point(59, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(853, 65);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter the Item\'s Id You want to Delete";
			// 
			// AdminOptions
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->DeletePage);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminOptions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminOptions";
			this->Load += gcnew System::EventHandler(this, &AdminOptions::AdminOptions_Load);
			this->DeletePage->ResumeLayout(false);
			this->DeletePage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public: void borrowedItemduesReport()
	{
		if (overDueItems->Rows->Count <= 0)
		{
			overDueItems->Columns->Add("Item Id");
			overDueItems->Columns->Add(" ");
			overDueItems->Columns->Add("Item title");
			overDueItems->Columns->Add("  ");
			overDueItems->Columns->Add("Suscriber Id");
			overDueItems->Columns->Add("   ");
			overDueItems->Columns->Add("Dues");
			if (dataOfgui[0].getFee() != 0)
			{
				overDueItems->Rows->Add(gcnew String(dataOfgui[0].getBorrowedItemId().c_str()), "", gcnew String(dataOfgui[0].get_Title().c_str())
					, "", gcnew String(dataOfgui[0].getBorrowedSuscriberId().c_str()), "", System::Convert::ToString(dataOfgui[0].getFee()));
			}
			else
			{
				overDueItems->Rows->Add(gcnew String(dataOfgui[indexCounter].getBorrowedItemId().c_str()), "", gcnew String(dataOfgui[indexCounter].get_Title().c_str())
					, "", gcnew String(dataOfgui[indexCounter].getBorrowedSuscriberId().c_str()), "", System::Convert::ToString(dataOfgui[indexCounter].getFee()));
				indexCounter++;
			}

			dataGridView1->DataSource = overDueItems;
		}
		else
		{
			if (dataOfgui[indexCounter].getFee())
			{
				overDueItems->Rows->Add(gcnew String(dataOfgui[indexCounter].getBorrowedItemId().c_str()), "", gcnew String(dataOfgui[indexCounter].get_Title().c_str())
					, "", gcnew String(dataOfgui[indexCounter].getBorrowedSuscriberId().c_str()), "", System::Convert::ToString(dataOfgui[indexCounter].getFee()));
				dataGridView1->DataSource = overDueItems;
				indexCounter++;
			}

		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		mainPageForm->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AddingItemsPage^ addItemsPage = gcnew AddingItemsPage(this);
	addItemsPage->ShowDialog();
}
private: System::Void AdminOptions_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DeletePage->Show();
	button8->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	UpadateItemPage^ updatePage = gcnew UpadateItemPage(this);
	DeletePage->Hide();
	updatePage->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	DeletePage->Show();
	dataGridView1->Show();
}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = marshal_as<std::string>(DeleteItemId->Text);
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (DeleteItemId->Text == "" || DeleteItemId->Text == " ")
		{
			MessageBox::Show("Item's Id feild is empty make sure to"
				" fill it with the Id of the Item you want to Delete"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		else if (dataOfgui[i].get_Itom_ID() == tempStr)
		{
			dataOfgui[i].set_Itom_ID("\0");
			dataOfgui[i].set_Temp_Library_ID("\0");
			dataOfgui[i].set_Category("\0");
			dataOfgui[i].set_Title("\0");
			dataOfgui[i].set_Author("\0");
			dataOfgui[i].set_Publisher("\0");
			dataOfgui[i].set_production_year(0);
			dataOfgui[i].set_Copies(0);
			dataOfgui[i].set_Status("\0");
			MessageBox::Show("Item deleted sucessfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			DeletePage->Hide();
			dataGridView1->Hide();
			break;
		}
		else
			counter++;

	}
	if (counter == 100)
		MessageBox::Show("Item does not exist make Sure you enter correct Item's id"
			, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	DeletePage->Hide();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	dataGridView1->Hide();
	DeletePage->Hide();
}

private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	DeletePage->Show();
	button8->Show();
	dataGridView1->Show();
}
};
}



