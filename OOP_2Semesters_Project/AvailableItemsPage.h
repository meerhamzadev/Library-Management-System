#pragma once
#include "objDeclerationFile.h"
namespace OOP2SemestersProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AvailableItemsPage
	/// </summary>
	public ref class AvailableItemsPage : public System::Windows::Forms::Form
	{
	
	DataTable^ availableItems = gcnew DataTable();
	
	private: System::Windows::Forms::Label^ ItemStatus;

	private: System::Windows::Forms::Button^ button1;
		   int indexCounter = 1;
	public:
		Form^ SuscriberOptionPage;
		AvailableItemsPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
	/*		int i = 0;
			while (dataOfgui[i].get_Copies()!=0)
			{
				createnewrow();
				i++;
			}*/
		}
		AvailableItemsPage(Form^ tempForm)
		{
			SuscriberOptionPage = tempForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			for (int i = 0; i < 100; i++)
			{
				if(dataOfgui[i].get_Copies() != 0)
					createnewrow();
			}
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AvailableItemsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ItemStatus = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1000, 500);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AvailableItemsPage::dataGridView1_CellContentClick_1);
			// 
			// ItemStatus
			// 
			this->ItemStatus->AutoSize = true;
			this->ItemStatus->BackColor = System::Drawing::Color::Transparent;
			this->ItemStatus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ItemStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 26, System::Drawing::FontStyle::Bold));
			this->ItemStatus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ItemStatus->Location = System::Drawing::Point(231, 197);
			this->ItemStatus->Name = L"ItemStatus";
			this->ItemStatus->Size = System::Drawing::Size(494, 47);
			this->ItemStatus->TabIndex = 1;
			this->ItemStatus->Text = L"No Item Available at this time";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(383, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AvailableItemsPage::button1_Click_1);
			// 
			// AvailableItemsPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ItemStatus);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AvailableItemsPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AvailableItemsPage";
			this->Load += gcnew System::EventHandler(this, &AvailableItemsPage::AvailableItemsPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void createnewrow()
	{
		if (availableItems->Rows->Count<=0)
		{
			ItemStatus->Hide();
			availableItems->Columns->Add("Item Id");
			availableItems->Columns->Add(" ");
			availableItems->Columns->Add("Item title");
			availableItems->Columns->Add("  ");
			availableItems->Columns->Add("Item Category");
			availableItems->Columns->Add("   ");
			availableItems->Columns->Add("Item Author");
			if (dataOfgui[0].get_Copies() != 0)
			{ 
				availableItems->Rows->Add(gcnew String(dataOfgui[0].get_Itom_ID().c_str()),"",gcnew String(dataOfgui[0].get_Title().c_str())
					,"",gcnew String(dataOfgui[0].get_Category().c_str()),"",gcnew String(dataOfgui[0].get_Author().c_str()));
			}
			else
			{
				availableItems->Rows->Add(gcnew String(dataOfgui[indexCounter].get_Itom_ID().c_str()), "", gcnew String(dataOfgui[indexCounter].get_Title().c_str())
					, "", gcnew String(dataOfgui[indexCounter].get_Category().c_str()), "", gcnew String(dataOfgui[indexCounter].get_Author().c_str()));
				indexCounter++;
			}
			
			dataGridView1->DataSource = availableItems;
		}
		else
		{
			if (dataOfgui[indexCounter].get_Copies())
			{
				ItemStatus->Hide();
				availableItems->Rows->Add(gcnew String(dataOfgui[indexCounter].get_Itom_ID().c_str()),"" ,gcnew String(dataOfgui[indexCounter].get_Title().c_str())
				,"",gcnew String(dataOfgui[indexCounter].get_Category().c_str()),"",gcnew String(dataOfgui[indexCounter].get_Author().c_str()));
				dataGridView1->DataSource = availableItems;
				indexCounter++;
			}

		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void AvailableItemsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//createnewrow();
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	SuscriberOptionPage->Show();
}
};
}
