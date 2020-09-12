#pragma once
#include <msclr\marshal_cppstd.h>
#include"objDeclerationFile.h"

namespace OOP2SemestersProject {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpadateItemPage
	/// </summary>
	public ref class UpadateItemPage : public System::Windows::Forms::Form
	{
	public:
		Form^ AdminOptionsForm;
		UpadateItemPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UpadateItemPage(Form^ tempForm)
		{
			AdminOptionsForm = tempForm;
			InitializeComponent();
			UpdatePage1->Hide();
			UpdatePage2->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpadateItemPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ItemsPreviousId;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ UpdatePage1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ updateLibraryName;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ updateidItem;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ UpdateLibraryId;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ UpdateitemCategory;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ UpdatePage2;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ UpdatepublishingYear;

	private: System::Windows::Forms::Label^ l;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ UpdatenoOfcopies;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ UpdatePublisherName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ UpdateitemsAuthor;

	private: System::Windows::Forms::Label^ lable5;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ UpdateitemTitle;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpadateItemPage::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ItemsPreviousId = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->UpdatePage1 = (gcnew System::Windows::Forms::Panel());
			this->UpdatePage2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->UpdatepublishingYear = (gcnew System::Windows::Forms::TextBox());
			this->l = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->UpdatenoOfcopies = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->UpdatePublisherName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->UpdateitemsAuthor = (gcnew System::Windows::Forms::TextBox());
			this->lable5 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->UpdateitemTitle = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->UpdateitemCategory = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->UpdateLibraryId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->updateidItem = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->updateLibraryName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->UpdatePage1->SuspendLayout();
			this->UpdatePage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::LightYellow;
			this->label2->Location = System::Drawing::Point(58, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(871, 65);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the Item\'s Id You want to Update";
			// 
			// ItemsPreviousId
			// 
			this->ItemsPreviousId->Location = System::Drawing::Point(196, 199);
			this->ItemsPreviousId->Multiline = true;
			this->ItemsPreviousId->Name = L"ItemsPreviousId";
			this->ItemsPreviousId->Size = System::Drawing::Size(593, 58);
			this->ItemsPreviousId->TabIndex = 2;
			this->ItemsPreviousId->TextChanged += gcnew System::EventHandler(this, &UpadateItemPage::UpdateItemId_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(196, 256);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(593, 4);
			this->panel2->TabIndex = 3;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(549, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(185, 51);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Continue";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &UpadateItemPage::button6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(260, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UpadateItemPage::button1_Click);
			// 
			// UpdatePage1
			// 
			this->UpdatePage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpdatePage1.BackgroundImage")));
			this->UpdatePage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UpdatePage1->Controls->Add(this->UpdatePage2);
			this->UpdatePage1->Controls->Add(this->button2);
			this->UpdatePage1->Controls->Add(this->panel5);
			this->UpdatePage1->Controls->Add(this->UpdateitemCategory);
			this->UpdatePage1->Controls->Add(this->label4);
			this->UpdatePage1->Controls->Add(this->panel4);
			this->UpdatePage1->Controls->Add(this->UpdateLibraryId);
			this->UpdatePage1->Controls->Add(this->label3);
			this->UpdatePage1->Controls->Add(this->panel3);
			this->UpdatePage1->Controls->Add(this->updateidItem);
			this->UpdatePage1->Controls->Add(this->label1);
			this->UpdatePage1->Controls->Add(this->panel10);
			this->UpdatePage1->Controls->Add(this->updateLibraryName);
			this->UpdatePage1->Controls->Add(this->label8);
			this->UpdatePage1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UpdatePage1->Location = System::Drawing::Point(0, 0);
			this->UpdatePage1->Name = L"UpdatePage1";
			this->UpdatePage1->Size = System::Drawing::Size(1000, 500);
			this->UpdatePage1->TabIndex = 7;
			// 
			// UpdatePage2
			// 
			this->UpdatePage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpdatePage2.BackgroundImage")));
			this->UpdatePage2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UpdatePage2->Controls->Add(this->panel9);
			this->UpdatePage2->Controls->Add(this->UpdatepublishingYear);
			this->UpdatePage2->Controls->Add(this->l);
			this->UpdatePage2->Controls->Add(this->panel8);
			this->UpdatePage2->Controls->Add(this->UpdatenoOfcopies);
			this->UpdatePage2->Controls->Add(this->label5);
			this->UpdatePage2->Controls->Add(this->panel7);
			this->UpdatePage2->Controls->Add(this->UpdatePublisherName);
			this->UpdatePage2->Controls->Add(this->label6);
			this->UpdatePage2->Controls->Add(this->panel6);
			this->UpdatePage2->Controls->Add(this->UpdateitemsAuthor);
			this->UpdatePage2->Controls->Add(this->lable5);
			this->UpdatePage2->Controls->Add(this->panel11);
			this->UpdatePage2->Controls->Add(this->button3);
			this->UpdatePage2->Controls->Add(this->UpdateitemTitle);
			this->UpdatePage2->Controls->Add(this->label7);
			this->UpdatePage2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UpdatePage2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UpdatePage2->Location = System::Drawing::Point(0, 0);
			this->UpdatePage2->Name = L"UpdatePage2";
			this->UpdatePage2->Size = System::Drawing::Size(998, 498);
			this->UpdatePage2->TabIndex = 16;
			this->UpdatePage2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpadateItemPage::UpdatePage2_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel9->Location = System::Drawing::Point(373, 222);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(272, 3);
			this->panel9->TabIndex = 27;
			// 
			// UpdatepublishingYear
			// 
			this->UpdatepublishingYear->BackColor = System::Drawing::Color::White;
			this->UpdatepublishingYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdatepublishingYear->ForeColor = System::Drawing::Color::Black;
			this->UpdatepublishingYear->Location = System::Drawing::Point(373, 180);
			this->UpdatepublishingYear->Multiline = true;
			this->UpdatepublishingYear->Name = L"UpdatepublishingYear";
			this->UpdatepublishingYear->Size = System::Drawing::Size(272, 44);
			this->UpdatepublishingYear->TabIndex = 26;
			this->UpdatepublishingYear->TextChanged += gcnew System::EventHandler(this, &UpadateItemPage::publishingYear_TextChanged);
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
			// UpdatenoOfcopies
			// 
			this->UpdatenoOfcopies->BackColor = System::Drawing::Color::White;
			this->UpdatenoOfcopies->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdatenoOfcopies->ForeColor = System::Drawing::Color::Black;
			this->UpdatenoOfcopies->Location = System::Drawing::Point(672, 265);
			this->UpdatenoOfcopies->Multiline = true;
			this->UpdatenoOfcopies->Name = L"UpdatenoOfcopies";
			this->UpdatenoOfcopies->Size = System::Drawing::Size(307, 44);
			this->UpdatenoOfcopies->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(665, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(322, 37);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Enter Numbers of Copies";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(672, 168);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(311, 3);
			this->panel7->TabIndex = 21;
			// 
			// UpdatePublisherName
			// 
			this->UpdatePublisherName->BackColor = System::Drawing::Color::White;
			this->UpdatePublisherName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdatePublisherName->ForeColor = System::Drawing::Color::Black;
			this->UpdatePublisherName->Location = System::Drawing::Point(672, 126);
			this->UpdatePublisherName->Multiline = true;
			this->UpdatePublisherName->Name = L"UpdatePublisherName";
			this->UpdatePublisherName->Size = System::Drawing::Size(307, 44);
			this->UpdatePublisherName->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(665, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(314, 37);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Enter Name of Publisher";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(43, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(276, 3);
			this->panel6->TabIndex = 18;
			// 
			// UpdateitemsAuthor
			// 
			this->UpdateitemsAuthor->BackColor = System::Drawing::Color::White;
			this->UpdateitemsAuthor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdateitemsAuthor->ForeColor = System::Drawing::Color::Black;
			this->UpdateitemsAuthor->Location = System::Drawing::Point(43, 265);
			this->UpdateitemsAuthor->Multiline = true;
			this->UpdateitemsAuthor->Name = L"UpdateitemsAuthor";
			this->UpdateitemsAuthor->Size = System::Drawing::Size(276, 44);
			this->UpdateitemsAuthor->TabIndex = 17;
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
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel11->Location = System::Drawing::Point(43, 168);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(276, 3);
			this->panel11->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Ivory;
			this->button3->Location = System::Drawing::Point(389, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(176, 53);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Update Data";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UpadateItemPage::button3_Click);
			// 
			// UpdateitemTitle
			// 
			this->UpdateitemTitle->BackColor = System::Drawing::Color::White;
			this->UpdateitemTitle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdateitemTitle->ForeColor = System::Drawing::Color::Black;
			this->UpdateitemTitle->Location = System::Drawing::Point(43, 126);
			this->UpdateitemTitle->Multiline = true;
			this->UpdateitemTitle->Name = L"UpdateitemTitle";
			this->UpdateitemTitle->Size = System::Drawing::Size(276, 44);
			this->UpdateitemTitle->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(36, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 37);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Enter Item\'s Title";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Ivory;
			this->button2->Location = System::Drawing::Point(415, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 53);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UpadateItemPage::button2_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(689, 345);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(276, 3);
			this->panel5->TabIndex = 14;
			// 
			// UpdateitemCategory
			// 
			this->UpdateitemCategory->BackColor = System::Drawing::Color::White;
			this->UpdateitemCategory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdateitemCategory->ForeColor = System::Drawing::Color::Black;
			this->UpdateitemCategory->Location = System::Drawing::Point(689, 303);
			this->UpdateitemCategory->Multiline = true;
			this->UpdateitemCategory->Name = L"UpdateitemCategory";
			this->UpdateitemCategory->Size = System::Drawing::Size(276, 44);
			this->UpdateitemCategory->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(682, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 37);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Enter Item\'s Category";
			this->label4->Click += gcnew System::EventHandler(this, &UpadateItemPage::label4_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(8, 345);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(276, 3);
			this->panel4->TabIndex = 11;
			// 
			// UpdateLibraryId
			// 
			this->UpdateLibraryId->BackColor = System::Drawing::Color::White;
			this->UpdateLibraryId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UpdateLibraryId->ForeColor = System::Drawing::Color::Black;
			this->UpdateLibraryId->Location = System::Drawing::Point(8, 303);
			this->UpdateLibraryId->Multiline = true;
			this->UpdateLibraryId->Name = L"UpdateLibraryId";
			this->UpdateLibraryId->Size = System::Drawing::Size(276, 44);
			this->UpdateLibraryId->TabIndex = 10;
			this->UpdateLibraryId->TextChanged += gcnew System::EventHandler(this, &UpadateItemPage::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(1, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 37);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Enter Library ID";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(689, 195);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(276, 3);
			this->panel3->TabIndex = 8;
			// 
			// updateidItem
			// 
			this->updateidItem->BackColor = System::Drawing::Color::White;
			this->updateidItem->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updateidItem->ForeColor = System::Drawing::Color::Black;
			this->updateidItem->Location = System::Drawing::Point(689, 153);
			this->updateidItem->Multiline = true;
			this->updateidItem->Name = L"updateidItem";
			this->updateidItem->Size = System::Drawing::Size(276, 44);
			this->updateidItem->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(682, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Enter the Item\'s Id";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel10->Location = System::Drawing::Point(8, 197);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(276, 3);
			this->panel10->TabIndex = 5;
			// 
			// updateLibraryName
			// 
			this->updateLibraryName->BackColor = System::Drawing::Color::White;
			this->updateLibraryName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updateLibraryName->ForeColor = System::Drawing::Color::Black;
			this->updateLibraryName->Location = System::Drawing::Point(8, 153);
			this->updateLibraryName->Multiline = true;
			this->updateLibraryName->Name = L"updateLibraryName";
			this->updateLibraryName->Size = System::Drawing::Size(276, 44);
			this->updateLibraryName->TabIndex = 4;
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
			this->label8->TabIndex = 3;
			this->label8->Text = L"Enter Library name";
			// 
			// UpadateItemPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->UpdatePage1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ItemsPreviousId);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpadateItemPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpadateItemPage";
			this->UpdatePage1->ResumeLayout(false);
			this->UpdatePage1->PerformLayout();
			this->UpdatePage2->ResumeLayout(false);
			this->UpdatePage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateItemId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = marshal_as<std::string>(updateidItem->Text);
	
	for (int i = 0; i < 100; i++)
	{
		/*-----------------------------------------------------------
			To Make sure that user don't left any feild/text box empty
		  -----------------------------------------------------------*/

		if (UpdateitemTitle->Text == "" || UpdateitemsAuthor->Text == "" || UpdatepublishingYear->Text == ""
			|| UpdatePublisherName->Text == "" || UpdatenoOfcopies->Text == "")
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
			dataOfgui[i].set_Title(marshal_as<std::string>(UpdateitemTitle->Text));
			dataOfgui[i].set_Author(marshal_as<std::string>(UpdateitemsAuthor->Text));
			dataOfgui[i].set_Publisher(marshal_as<std::string>(UpdatePublisherName->Text));

			int counter = 0, counter1 = 0;
			tempStr = marshal_as<std::string>(UpdatepublishingYear->Text);
			string tempStr1 = marshal_as<std::string>(UpdatenoOfcopies->Text);

			/*-----------------------------------------------------------
			  To make sure user enter Publishing year and no of copies as
			  an integer value to avoid runtime exceptions
			  ----------------------------------------------------------*/

			for (int i = 0; i < 4; i++)
			{
				if (isdigit(tempStr[i]))
					counter++;
			}

			for (int i = 0; i < tempStr1.length(); i++)
			{
				if (isdigit(tempStr1[i]))
					counter1++;
			}

			/*-----------------------------------------------------------
			  If publishing year or number of copies is other then integer
			  then it display an error message on screen and bound user to
			  enter correct data
			  ----------------------------------------------------------*/

			if (counter != 4 || tempStr.length() != 4 || counter1 != tempStr1.length())
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

			dataOfgui[i].set_production_year(System::Convert::ToInt32(UpdatepublishingYear->Text));
			dataOfgui[i].set_Copies(System::Convert::ToInt32(UpdatenoOfcopies->Text));
			MessageBox::Show("Item Updated sucessfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			/*-----------------------------------------------------------
				to Hide this form and return to the option form mainly use
				to switch between forms
			  ----------------------------------------------------------*/

			this->Hide();
			UpdatePage1->Hide();
			UpdatePage2->Hide();
			AdminOptionsForm->Show();
			break;
		}
	}
}
private: System::Void publishingYear_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string tempStr = marshal_as<std::string>(ItemsPreviousId->Text);
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (ItemsPreviousId->Text == "" || ItemsPreviousId->Text == " ")
		{
			MessageBox::Show("Item's Id feild is empty make sure to"
				" fill it with the Id of the Item you want to Delete"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (dataOfgui[i].get_Itom_ID() == tempStr)
		{
			UpdatePage1->Show();
			break;
		}

		else
			counter++;
	}

	if (counter == 100)
		MessageBox::Show("Item does not exist make Sure you enter correct Item's id"
			, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	// Converting System string to standard string 

	std::string tempStr = marshal_as<std::string>(ItemsPreviousId->Text);

	for (int i = 0; i < 100; i++)
	{

		/*-----------------------------------------------------------
			To Make sure that user don't left any feild/text box empty
		  -----------------------------------------------------------*/

		if (updateLibraryName->Text == "" || UpdateLibraryId->Text == "" ||
			updateidItem->Text == "" || UpdateitemCategory->Text == "" || UpdateLibraryId->Text == " " ||
			updateLibraryName->Text == " " || updateidItem->Text == " " || UpdateitemCategory->Text == " ")
		{
			MessageBox::Show("You might left something empty make sure to fill all feilds with respective data"
				, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		/*-----------------------------------------------------------------------
		  To make sure data coming from forms is store on new instances to avoid
		  overwriting of previous data if id match to previous one's then this
		  block will not be executed
		  ----------------------------------------------------------------------*/

		else if (dataOfgui[i].get_Itom_ID() == tempStr)
		{
			dataOfgui[i].set_Temp_Library_ID(marshal_as<std::string>(UpdateLibraryId->Text));
			dataOfgui[i].setLibraryName(marshal_as<std::string>(updateLibraryName->Text));
			dataOfgui[i].set_Itom_ID(marshal_as<std::string>(updateidItem->Text));
			dataOfgui[i].set_Category(marshal_as<std::string>(UpdateitemCategory->Text));
			dataOfgui[i].set_Status("On the Shelf");
			UpdatePage2->Show();
			break;
		}
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AdminOptionsForm->Show();
}
private: System::Void UpdatePage2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
