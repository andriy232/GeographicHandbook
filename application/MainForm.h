#include "AboutForm.h"

#pragma once
namespace DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  txtBoxSearchCountry;
	private: System::Windows::Forms::Button^  btnPrev;
	private: System::Windows::Forms::Button^  btnNext;


	private: System::Windows::Forms::Label^  lblNum;
	private: System::Windows::Forms::Button^  btnLast;


	private: System::Windows::Forms::Button^  btnFirst;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCountryName;
	private: System::Windows::Forms::TextBox^  txtBoxMainInfo;
	private: System::Windows::Forms::PictureBox^  pictCountryFlag;
	private: System::Windows::Forms::TextBox^  txtBoxFullInfo;
	private: System::Windows::Forms::ListBox^  lstBoxSelectCountry;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;

	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem1;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBoxSearchCountry = (gcnew System::Windows::Forms::TextBox());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->lblNum = (gcnew System::Windows::Forms::Label());
			this->btnFirst = (gcnew System::Windows::Forms::Button());
			this->btnLast = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCountryName = (gcnew System::Windows::Forms::Label());
			this->txtBoxMainInfo = (gcnew System::Windows::Forms::TextBox());
			this->pictCountryFlag = (gcnew System::Windows::Forms::PictureBox());
			this->txtBoxFullInfo = (gcnew System::Windows::Forms::TextBox());
			this->lstBoxSelectCountry = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"�����";
			// 
			// txtBoxSearchCountry
			// 
			this->txtBoxSearchCountry->Location = System::Drawing::Point(10, 140);
			this->txtBoxSearchCountry->Multiline = true;
			this->txtBoxSearchCountry->Name = L"txtBoxSearchCountry";
			this->txtBoxSearchCountry->Size = System::Drawing::Size(204, 21);
			this->txtBoxSearchCountry->TabIndex = 7;
			this->toolTip1->SetToolTip(this->txtBoxSearchCountry, L"������ ��� ������");
			this->txtBoxSearchCountry->TextChanged += gcnew System::EventHandler(this, &MainForm::txtBoxSearchCountry_TextChanged);
			// 
			// btnPrev
			// 
			this->btnPrev->BackColor = System::Drawing::SystemColors::Window;
			this->btnPrev->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPrev->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPrev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->btnPrev->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPrev->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrev.Image")));
			this->btnPrev->Location = System::Drawing::Point(63, 86);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnPrev->Size = System::Drawing::Size(30, 21);
			this->btnPrev->TabIndex = 9;
			this->btnPrev->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnPrev->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->toolTip1->SetToolTip(this->btnPrev, L"��������� �������");
			this->btnPrev->UseVisualStyleBackColor = false;
			this->btnPrev->Click += gcnew System::EventHandler(this, &MainForm::btnPrev_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::Window;
			this->btnNext->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNext->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(135, 86);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(30, 21);
			this->btnNext->TabIndex = 10;
			this->btnNext->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->toolTip1->SetToolTip(this->btnNext, L"�������� �������");
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &MainForm::btnNext_Click);
			// 
			// lblNum
			// 
			this->lblNum->AutoSize = true;
			this->lblNum->Location = System::Drawing::Point(99, 90);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Size = System::Drawing::Size(18, 13);
			this->lblNum->TabIndex = 12;
			this->lblNum->Text = L"�";
			// 
			// btnFirst
			// 
			this->btnFirst->BackColor = System::Drawing::SystemColors::Window;
			this->btnFirst->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnFirst->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->btnFirst->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFirst->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFirst.Image")));
			this->btnFirst->Location = System::Drawing::Point(27, 86);
			this->btnFirst->Name = L"btnFirst";
			this->btnFirst->Size = System::Drawing::Size(30, 21);
			this->btnFirst->TabIndex = 14;
			this->btnFirst->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnFirst->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->toolTip1->SetToolTip(this->btnFirst, L"����� �������");
			this->btnFirst->UseVisualStyleBackColor = false;
			this->btnFirst->Click += gcnew System::EventHandler(this, &MainForm::btnFirst_Click);
			// 
			// btnLast
			// 
			this->btnLast->BackColor = System::Drawing::SystemColors::Window;
			this->btnLast->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnLast->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLast->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnLast->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLast.Image")));
			this->btnLast->Location = System::Drawing::Point(171, 86);
			this->btnLast->Name = L"btnLast";
			this->btnLast->Size = System::Drawing::Size(30, 21);
			this->btnLast->TabIndex = 15;
			this->btnLast->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->toolTip1->SetToolTip(this->btnLast, L"������� �������");
			this->btnLast->UseVisualStyleBackColor = false;
			this->btnLast->Click += gcnew System::EventHandler(this, &MainForm::btnLast_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 21;
			// 
			// lblCountryName
			// 
			this->lblCountryName->AutoSize = true;
			this->lblCountryName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCountryName->Location = System::Drawing::Point(228, 57);
			this->lblCountryName->Name = L"lblCountryName";
			this->lblCountryName->Size = System::Drawing::Size(127, 20);
			this->lblCountryName->TabIndex = 22;
			this->lblCountryName->Text = L"����� �������";
			// 
			// txtBoxMainInfo
			// 
			this->txtBoxMainInfo->Location = System::Drawing::Point(231, 85);
			this->txtBoxMainInfo->Multiline = true;
			this->txtBoxMainInfo->Name = L"txtBoxMainInfo";
			this->txtBoxMainInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtBoxMainInfo->Size = System::Drawing::Size(283, 115);
			this->txtBoxMainInfo->TabIndex = 23;
			this->toolTip1->SetToolTip(this->txtBoxMainInfo, L"������ ������� ��� �������");
			// 
			// pictCountryFlag
			// 
			this->pictCountryFlag->Location = System::Drawing::Point(520, 85);
			this->pictCountryFlag->Name = L"pictCountryFlag";
			this->pictCountryFlag->Size = System::Drawing::Size(226, 115);
			this->pictCountryFlag->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictCountryFlag->TabIndex = 24;
			this->pictCountryFlag->TabStop = false;
			this->toolTip1->SetToolTip(this->pictCountryFlag, L"������ �������");
			// 
			// txtBoxFullInfo
			// 
			this->txtBoxFullInfo->Location = System::Drawing::Point(231, 206);
			this->txtBoxFullInfo->Multiline = true;
			this->txtBoxFullInfo->Name = L"txtBoxFullInfo";
			this->txtBoxFullInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtBoxFullInfo->Size = System::Drawing::Size(515, 310);
			this->txtBoxFullInfo->TabIndex = 23;
			this->toolTip1->SetToolTip(this->txtBoxFullInfo, L"����� ���������� ��� �������");
			// 
			// lstBoxSelectCountry
			// 
			this->lstBoxSelectCountry->FormattingEnabled = true;
			this->lstBoxSelectCountry->Location = System::Drawing::Point(10, 196);
			this->lstBoxSelectCountry->Name = L"lstBoxSelectCountry";
			this->lstBoxSelectCountry->ScrollAlwaysVisible = true;
			this->lstBoxSelectCountry->Size = System::Drawing::Size(204, 316);
			this->lstBoxSelectCountry->TabIndex = 25;
			this->toolTip1->SetToolTip(this->lstBoxSelectCountry, L"�������� ��� �������� �������� �� �����");
			this->lstBoxSelectCountry->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lstBoxSelectCountry_MouseClick);
			this->lstBoxSelectCountry->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lstBoxSelectCountry_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20));
			this->label4->Location = System::Drawing::Point(12, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 31);
			this->label4->TabIndex = 22;
			this->label4->Text = L"������������ �������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"������ ��������";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MainForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(753, 24);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::btnPrint_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������ToolStripMenuItem,
					this->��������������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->������������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->����������ToolStripMenuItem->Text = L"����� �������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::btnFirst_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->��������������ToolStripMenuItem->Text = L"��������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::btnPrev_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->�������������ToolStripMenuItem->Text = L"�������� �������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::btnNext_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->������������ToolStripMenuItem->Text = L"������� �������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::btnLast_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����������ToolStripMenuItem1 });
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->�����������ToolStripMenuItem->Text = L"��������";
			// 
			// �����������ToolStripMenuItem1
			// 
			this->�����������ToolStripMenuItem1->Name = L"�����������ToolStripMenuItem1";
			this->�����������ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�����������ToolStripMenuItem1->Text = L"��� ��������";
			this->�����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 522);
			this->Controls->Add(this->lstBoxSelectCountry);
			this->Controls->Add(this->pictCountryFlag);
			this->Controls->Add(this->txtBoxFullInfo);
			this->Controls->Add(this->txtBoxMainInfo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblCountryName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnLast);
			this->Controls->Add(this->btnFirst);
			this->Controls->Add(this->lblNum);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnPrev);
			this->Controls->Add(this->txtBoxSearchCountry);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"������������ �������";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//�������� ���� ��� �������� � ��
		DataSet ^ dataSet;
		OleDb::OleDbDataAdapter ^ oleDataAdapter;
		OleDb::OleDbConnection^ oleConnection;
		OleDb::OleDbCommand ^ oleCommand;

		//�������� ����
		int sel = 0;
		int linesCount = 0;
		int selCountry = 0;

	private: System::
		Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//������ �����

		//��������� �������, �������, � �������
		oleConnection = gcnew OleDb::
			OleDbConnection( 
			"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
		dataSet = gcnew DataSet();
		oleCommand = gcnew OleDb::OleDbCommand();
		try
		{
			//��'��������
			if (oleConnection->State == ConnectionState::Closed)
				oleConnection->Open();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("�������� � ����� �����\n", e->Message);
		}

		//�������� ���
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);

		//�������� � ���
		oleDataAdapter->Fill(dataSet, "[table]");
		
		//�������� ������� ���������� �����
		linesCount = (dataSet->Tables[0]->Rows->Count) - 1;
		
		lstBoxSelectCountry->Items->Clear();

		for(int i=0;i<linesCount;i++)
		{
			//���������� ���������
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}

		//��������� �����������
		selCountry = 1;
		lblNum->Text = Convert::ToString(selCountry);
		lstBoxSelectCountry->SelectedIndex = selCountry-1;
		
		//��'�������� �� ����
		oleConnection->Close();
	}
private: System::Void lstBoxSelectCountry_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//���� ����� � �������

		//��������� �������, �������, � �������
		dataSet = gcnew DataSet();
		oleConnection = gcnew OleDb::
			OleDbConnection(
				"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
		oleCommand = gcnew OleDb::OleDbCommand();

		//��'��������
		if (oleConnection->State == ConnectionState::Closed)
			oleConnection->Open();

		//�������� ������ ��������� ��������
		selCountry = lstBoxSelectCountry->SelectedIndex;
		lblNum->Text = Convert::ToString(selCountry + 1);

		//���� ���� ������ ������
		if (txtBoxSearchCountry->Text == "")
		{
			//�������� ���
			oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);
		}
		else
		{
			//���� � ��� ������ � �����
			String^ search = txtBoxSearchCountry->Text;

			//�������� ���
			oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table] where [�����] like ('%" + search + "%');", oleConnection);
		}

		//�������� � ���
		oleDataAdapter->Fill(dataSet, "[table]");

		//���������� ���� �����
		lblCountryName->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[1]);
		txtBoxMainInfo->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[2]);
		txtBoxFullInfo->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[3]);

		//�������� ������� � �������� � picturebox
		String^ imgLocation = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[4]);
		if (imgLocation != "") 
		{
			imgLocation = imgLocation->Remove(imgLocation->IndexOf("#"));
			pictCountryFlag->ImageLocation = imgLocation;
		}

		//���������� ������� ����� �������
		linesCount = (dataSet->Tables[0]->Rows->Count) - 1;

		//��'�������� �� ����
		oleConnection->Close();
	}
private: System::Void btnPrev_Click(System::Object^  sender, System::EventArgs^  e) {
	//������� �� ������������ ��������
	if (selCountry >= 1)
	{
		lblNum->Text = Convert::ToString(Convert::ToInt32(lblNum->Text) - 1);
		selCountry--;
		lstBoxSelectCountry->SelectedIndex -= 1;
	}
}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	//������� �� ���������� ��������
	if (selCountry < linesCount - 1)
	{
		lblNum->Text = Convert::ToString(Convert::ToInt32(lblNum->Text) + 1);
		selCountry++;
		lstBoxSelectCountry->SelectedIndex += 1;
	}
}
private: System::Void btnFirst_Click(System::Object^  sender, System::EventArgs^  e) {
	//������� �� ������� ��������
	if (lstBoxSelectCountry->Items->Count != 1)
	{
		lblNum->Text = Convert::ToString(1);
		selCountry = 1;
		lstBoxSelectCountry->SelectedIndex = 0;
	}
}
private: System::Void btnLast_Click(System::Object^  sender, System::EventArgs^  e) {
	//������� �� ���������� ��������
	linesCount = lstBoxSelectCountry->Items->Count;
	if (linesCount != 1)
	{
		lblNum->Text = Convert::ToString(linesCount);
		selCountry = linesCount - 1;
		lstBoxSelectCountry->SelectedIndex = selCountry;
	}
}
private: System::Void txtBoxSearchCountry_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//�������� ������ � ��������� ���������

	//��������� �������, �������, � �������
	dataSet = gcnew DataSet();
	oleConnection = gcnew OleDb::
		OleDbConnection(
			"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
	oleCommand = gcnew OleDb::OleDbCommand();

	//��'��������
	if (oleConnection->State == ConnectionState::Closed)
		oleConnection->Open();

	lstBoxSelectCountry->Items->Clear();
	
	//���� � ��� � �����
	if(txtBoxSearchCountry->Text != "")
	{
		String^ search = txtBoxSearchCountry->Text;
		lstBoxSelectCountry->Items->Clear();

		//�������� ���
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table] where [�����] like ('%" + search + "%');", oleConnection);

		//�������� � ���
		oleDataAdapter->Fill(dataSet, "[table]");

		for (int i = 0; i<dataSet->Tables[0]->Rows->Count; i++)
		{
			//���������� ���������
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}
	}
	else
	{
		//�������� �� ���
		//�������� ���
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);
		//�������� � ���
		oleDataAdapter->Fill(dataSet, "[table]");

		for (int i = 0; i<dataSet->Tables[0]->Rows->Count; i++)
		{
			//���������� ���������
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}
	}
}
private: System::Void lstBoxSelectCountry_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//��� �� �������
	lstBoxSelectCountry_SelectedIndexChanged( sender, e);
}
private: System::Void btnPrint_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	//������� ����� �� ����
	String^ fullText = txtBoxFullInfo->Text;
	for (int i = 0; i < txtBoxFullInfo->Text->Length - 1; i+=90)
	{
		fullText = fullText->Insert(i, "\n");
	}

	String^ printText = "����� �����: " + lblCountryName->Text +
		"\n������� ����������:\n" + txtBoxMainInfo->Text +
		"\n����� ����������:\n" + fullText;

	//���������� �����
	e->Graphics->DrawString(printText,
		gcnew System::Drawing::Font("Arial", 12, FontStyle::Regular),
		Brushes::Black, 20, 25);
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	showAbout();
}
private: void showAbout()
{
	//������ �����
	AboutForm^ frm = gcnew AboutForm;
	frm->Show(this);
}
};
}