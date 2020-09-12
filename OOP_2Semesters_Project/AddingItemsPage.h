#pragma once
#include <cctype>
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
	//Borrowing dataOfgui[100];
	/// <summary>
	/// Summary for AddingItemsPage
	/// </summary>
	public ref class AddingItemsPage : public System::Windows::Forms::Form
	{
	public:

		/*------------------------------------------------
		   Create a new object using system provided class
		   Form to make switching between forms possibel
		  ------------------------------------------------*/

		Form ^adminOptionForm;
		
		AddingItemsPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		/*---------------------------------------------
		   Overload Class constructo to make switching 
		   between forms possible
		  ---------------------------------------------*/
		

		AddingItemsPage(Form ^tempOptionForm)
		{
			adminOptionForm = tempOptionForm;
			InitializeComponent();
			AddingPage2->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddingItemsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::TextBox^ addLibraryName;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ labelh;
	private: System::Windows::Forms::TextBox^ addLibraryId;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::TextBox^ AdditemId;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lableUnknow;
	private: System::Windows::Forms::TextBox^ addItemCategory;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ AddingPage2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ publishingYear;
	private: System::Windows::Forms::Label^ l;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ noOfcopies;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ PublisherName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ itemsAuthor;
	private: System::Windows::Forms::Label^ lable5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ itemTitle;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddingItemsPage::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->addLibraryName = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->labelh = (gcnew System::Windows::Forms::Label());
			this->addLibraryId = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->AdditemId = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lableUnknow = (gcnew System::Windows::Forms::Label());
			this->addItemCategory = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AddingPage2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->publishingYear = (gcnew System::Windows::Forms::TextBox());
			this->l = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->noOfcopies = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->PublisherName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->itemsAuthor = (gcnew System::Windows::Forms::TextBox());
			this->lable5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->itemTitle = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddingPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(1, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(248, 37);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Enter Library name";
			// 
			// addLibraryName
			// 
			this->addLibraryName->BackColor = System::Drawing::Color::White;
			this->addLibraryName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addLibraryName->ForeColor = System::Drawing::Color::Black;
			this->addLibraryName->Location = System::Drawing::Point(8, 153);
			this->addLibraryName->Multiline = true;
			this->addLibraryName->Name = L"addLibraryName";
			this->addLibraryName->Size = System::Drawing::Size(276, 44);
			this->addLibraryName->TabIndex = 3;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel10->Location = System::Drawing::Point(8, 197);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(276, 3);
			this->panel10->TabIndex = 4;
			// 
			// labelh
			// 
			this->labelh->AutoSize = true;
			this->labelh->BackColor = System::Drawing::Color::Transparent;
			this->labelh->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->labelh->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelh->Location = System::Drawing::Point(1, 250);
			this->labelh->Name = L"labelh";
			this->labelh->Size = System::Drawing::Size(204, 37);
			this->labelh->TabIndex = 5;
			this->labelh->Text = L"Enter Library Id";
			// 
			// addLibraryId
			// 
			this->addLibraryId->BackColor = System::Drawing::Color::White;
			this->addLibraryId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addLibraryId->ForeColor = System::Drawing::Color::Black;
			this->addLibraryId->Location = System::Drawing::Point(8, 303);
			this->addLibraryId->Multiline = true;
			this->addLibraryId->Name = L"addLibraryId";
			this->addLibraryId->Size = System::Drawing::Size(276, 44);
			this->addLibraryId->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(8, 345);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(276, 3);
			this->panel1->TabIndex = 7;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::Transparent;
			this->label->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label->Location = System::Drawing::Point(682, 103);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(174, 37);
			this->label->TabIndex = 8;
			this->label->Text = L"Enter item Id";
			// 
			// AdditemId
			// 
			this->AdditemId->BackColor = System::Drawing::Color::White;
			this->AdditemId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AdditemId->ForeColor = System::Drawing::Color::Black;
			this->AdditemId->Location = System::Drawing::Point(689, 153);
			this->AdditemId->Multiline = true;
			this->AdditemId->Name = L"AdditemId";
			this->AdditemId->Size = System::Drawing::Size(276, 44);
			this->AdditemId->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(689, 195);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(276, 3);
			this->panel2->TabIndex = 10;
			// 
			// lableUnknow
			// 
			this->lableUnknow->AutoSize = true;
			this->lableUnknow->BackColor = System::Drawing::Color::Transparent;
			this->lableUnknow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->lableUnknow->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lableUnknow->Location = System::Drawing::Point(682, 250);
			this->lableUnknow->Name = L"lableUnknow";
			this->lableUnknow->Size = System::Drawing::Size(262, 37);
			this->lableUnknow->TabIndex = 11;
			this->lableUnknow->Text = L"Enter item Category";
			// 
			// addItemCategory
			// 
			this->addItemCategory->BackColor = System::Drawing::Color::White;
			this->addItemCategory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addItemCategory->ForeColor = System::Drawing::Color::Black;
			this->addItemCategory->Location = System::Drawing::Point(689, 303);
			this->addItemCategory->Multiline = true;
			this->addItemCategory->Name = L"addItemCategory";
			this->addItemCategory->Size = System::Drawing::Size(276, 44);
			this->addItemCategory->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(689, 345);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(276, 3);
			this->panel3->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Ivory;
			this->button1->Location = System::Drawing::Point(415, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 53);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddingItemsPage::button1_Click);
			// 
			// AddingPage2
			// 
			this->AddingPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddingPage2.BackgroundImage")));
			this->AddingPage2->Controls->Add(this->panel9);
			this->AddingPage2->Controls->Add(this->publishingYear);
			this->AddingPage2->Controls->Add(this->l);
			this->AddingPage2->Controls->Add(this->panel8);
			this->AddingPage2->Controls->Add(this->noOfcopies);
			this->AddingPage2->Controls->Add(this->label4);
			this->AddingPage2->Controls->Add(this->panel7);
			this->AddingPage2->Controls->Add(this->PublisherName);
			this->AddingPage2->Controls->Add(this->label3);
			this->AddingPage2->Controls->Add(this->panel6);
			this->AddingPage2->Controls->Add(this->itemsAuthor);
			this->AddingPage2->Controls->Add(this->lable5);
			this->AddingPage2->Controls->Add(this->panel5);
			this->AddingPage2->Controls->Add(this->button2);
			this->AddingPage2->Controls->Add(this->itemTitle);
			this->AddingPage2->Controls->Add(this->label1);
			this->AddingPage2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddingPage2->Location = System::Drawing::Point(0, 0);
			this->AddingPage2->Name = L"AddingPage2";
			this->AddingPage2->Size = System::Drawing::Size(1000, 500);
			this->AddingPage2->TabIndex = 15;
			this->AddingPage2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddingItemsPage::AddingPage2_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel9->Location = System::Drawing::Point(373, 222);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(272, 3);
			this->panel9->TabIndex = 27;
			// 
			// publishingYear
			// 
			this->publishingYear->BackColor = System::Drawing::Color::White;
			this->publishingYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->publishingYear->ForeColor = System::Drawing::Color::Black;
			this->publishingYear->Location = System::Drawing::Point(373, 180);
			this->publishingYear->Multiline = true;
			this->publishingYear->Name = L"publishingYear";
			this->publishingYear->Size = System::Drawing::Size(272, 44);
			this->publishingYear->TabIndex = 26;
			// 
			// l
			// 
			this->l->AutoSize = true;
			this->l->BackColor = System::Drawing::Color::Transparent;
			this->l->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->l->ForeColor = System::Drawing::Color::White;
			this->l->Location = System::Drawing::Point(366, 140);
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(276, 37);
			this->l->TabIndex = 25;
			this->l->Text = L"Enter Publishing Year";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel8->Location = System::Drawing::Point(668, 308);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(311, 3);
			this->panel8->TabIndex = 24;
			// 
			// noOfcopies
			// 
			this->noOfcopies->BackColor = System::Drawing::Color::White;
			this->noOfcopies->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->noOfcopies->ForeColor = System::Drawing::Color::Black;
			this->noOfcopies->Location = System::Drawing::Point(672, 265);
			this->noOfcopies->Multiline = true;
			this->noOfcopies->Name = L"noOfcopies";
			this->noOfcopies->Size = System::Drawing::Size(307, 44);
			this->noOfcopies->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(665, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(322, 37);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Enter Numbers of Copies";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(672, 168);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(311, 3);
			this->panel7->TabIndex = 21;
			// 
			// PublisherName
			// 
			this->PublisherName->BackColor = System::Drawing::Color::White;
			this->PublisherName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PublisherName->ForeColor = System::Drawing::Color::Black;
			this->PublisherName->Location = System::Drawing::Point(672, 126);
			this->PublisherName->Multiline = true;
			this->PublisherName->Name = L"PublisherName";
			this->PublisherName->Size = System::Drawing::Size(307, 44);
			this->PublisherName->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(665, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(314, 37);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Enter Name of Publisher";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(43, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(276, 3);
			this->panel6->TabIndex = 18;
			// 
			// itemsAuthor
			// 
			this->itemsAuthor->BackColor = System::Drawing::Color::White;
			this->itemsAuthor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemsAuthor->ForeColor = System::Drawing::Color::Black;
			this->itemsAuthor->Location = System::Drawing::Point(43, 265);
			this->itemsAuthor->Multiline = true;
			this->itemsAuthor->Name = L"itemsAuthor";
			this->itemsAuthor->Size = System::Drawing::Size(276, 44);
			this->itemsAuthor->TabIndex = 17;
			// 
			// lable5
			// 
			this->lable5->AutoSize = true;
			this->lable5->BackColor = System::Drawing::Color::Transparent;
			this->lable5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->lable5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lable5->Location = System::Drawing::Point(36, 213);
			this->lable5->Name = L"lable5";
			this->lable5->Size = System::Drawing::Size(286, 37);
			this->lable5->TabIndex = 16;
			this->lable5->Text = L"Enter Name of Author";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(43, 168);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(276, 3);
			this->panel5->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Ivory;
			this->button2->Location = System::Drawing::Point(389, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 53);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Enter Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddingItemsPage::button2_Click);
			// 
			// itemTitle
			// 
			this->itemTitle->BackColor = System::Drawing::Color::White;
			this->itemTitle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemTitle->ForeColor = System::Drawing::Color::Black;
			this->itemTitle->Location = System::Drawing::Point(43, 126);
			this->itemTitle->Multiline = true;
			this->itemTitle->Name = L"itemTitle";
			this->itemTitle->Size = System::Drawing::Size(276, 44);
			this->itemTitle->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(36, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Item\'s Title";
			// 
			// AddingItemsPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->AddingPage2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->addItemCategory);
			this->Controls->Add(this->lableUnknow);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->AdditemId);
			this->Controls->Add(this->label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->addLibraryId);
			this->Controls->Add(this->labelh);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->addLibraryName);
			this->Controls->Add(this->label8);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddingItemsPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddingItemsPage";
			this->Load += gcnew System::EventHandler(this, &AddingItemsPage::AddingItemsPage_Load);
			this->AddingPage2->ResumeLayout(false);
			this->AddingPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Converting System string to standard string 
	
	std::string tempStr = marshal_as<std::string>(AdditemId->Text);

	for (int i = 0; i < 100; i++)
	{

		/*----------------------------------------------------------- 
			To Make sure that user don't left any feild/text box empty
		  -----------------------------------------------------------*/

		if (addLibraryId->Text =="" || addLibraryName->Text =="" ||
			 AdditemId->Text =="" || addItemCategory->Text =="" || addLibraryId->Text == " " ||
			addLibraryName->Text == " " || AdditemId->Text == " " || addItemCategory->Text == " ")
		{
			MessageBox::Show("You might left something empty make sure to fill all feilds with respective data"
								, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		
		/*----------------------------------------------------------------------
		 To make sure Id enter by user is entirely new and does not exist before
		 if it exist then it prompt an error message on screen
		 -----------------------------------------------------------------------*/

		else if (dataOfgui[i].get_Itom_ID() == tempStr)
		{
			MessageBox::Show("Item already exist try a new Id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		/*-----------------------------------------------------------------------
		  To make sure data coming from forms is store on new instances to avoid
		  overwriting of previous data if id match to previous one's then this 
		  block will not be executed
		  ----------------------------------------------------------------------*/

		else if (dataOfgui[i].get_Itom_ID() == "\0")
		{
				dataOfgui[i].setLibraryID(marshal_as<std::string>(addLibraryId->Text));
				dataOfgui[i].set_Temp_Library_ID(dataOfgui[i].getLibraryID());
				dataOfgui[i].setLibraryName(marshal_as<std::string>(addLibraryName->Text));
				dataOfgui[i].set_Itom_ID(marshal_as<std::string>(AdditemId->Text));
				dataOfgui[i].set_Category(marshal_as<std::string>(addItemCategory->Text));
				dataOfgui[i].set_Status("On the Shelf");
				AddingPage2->Show();
				break;
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Convert system string into standard string and store item's id in it
	
	std::string tempStr = marshal_as<std::string>(AdditemId->Text);
	for (int i = 0; i < 100; i++)
	{
		/*-----------------------------------------------------------
			To Make sure that user don't left any feild/text box empty
		  -----------------------------------------------------------*/

		if (itemTitle->Text == "" || itemsAuthor->Text == "" || publishingYear->Text == ""
				|| PublisherName->Text == "" || noOfcopies->Text == "")
		{
			MessageBox::Show("You might left something empty make sure to fill all feilds with respective data"					
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		/*-----------------------------------------------------------
			To Make sure that the remaining data on the next page store
			on the same index on which item's id stores 
		  -----------------------------------------------------------*/

		else if (dataOfgui[i].get_Itom_ID() == tempStr)
		{
			dataOfgui[i].set_Title(marshal_as<std::string>(itemTitle->Text));
			dataOfgui[i].set_Author(marshal_as<std::string>(itemsAuthor->Text));
			dataOfgui[i].set_Publisher(marshal_as<std::string>(PublisherName->Text));
				
			int counter = 0, counter1=0;	
			tempStr = marshal_as<std::string>(publishingYear->Text);
			string tempStr1= marshal_as<std::string>(noOfcopies->Text);
			
			/*-----------------------------------------------------------
	          To make sure user enter Publishing year and no of copies as
			  an integer value to avoid runtime exceptions
			  ----------------------------------------------------------*/
			
			for (int j = 0; j < 4; j++)
			{
				if (isdigit(tempStr[j]))
					counter++;
			}

			for (int j = 0; j < tempStr1.length() ; j++)
			{
				if (isdigit(tempStr1[j]))
					counter1++;
			}

			/*-----------------------------------------------------------
			  If publishing year or number of copies is other then integer
			  then it display an error message on screen and bound user to
			  enter correct data
			  ----------------------------------------------------------*/

			if (counter != 4 || tempStr.length()!=4 || counter1 != tempStr1.length())
			{
					MessageBox::Show("You might enter wrong input for Publishing Year or Number of Copies "
							"Publishing Year should be in number format like '2020' "
							"and Number of Copies should be a number like '10' or '12'",
							"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					break;
			}

			/*-----------------------------------------------------------
			   If user enter correct integer data then the previous if 
			   statement ignore and this block is executed
			  ----------------------------------------------------------*/

			dataOfgui[i].set_production_year(System::Convert::ToInt32(publishingYear->Text));
			dataOfgui[i].set_Copies(System::Convert::ToInt32(noOfcopies->Text));
			MessageBox::Show("Item added sucessfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
			/*-----------------------------------------------------------
				to Hide this form and return to the option form mainly use
				to switch between forms
			  ----------------------------------------------------------*/
			
			this->Hide();
			AddingPage2->Hide();
			adminOptionForm->Show();
			break;
		}		
	}

}

private: System::Void AddingItemsPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddingPage2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
