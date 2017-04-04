#pragma once
#include "AddForm.h"
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->label1->Location = System::Drawing::Point(6, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Навігація";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->label2->Location = System::Drawing::Point(6, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пошук";
			// 
			// txtBoxSearchCountry
			// 
			this->txtBoxSearchCountry->Location = System::Drawing::Point(10, 159);
			this->txtBoxSearchCountry->Multiline = true;
			this->txtBoxSearchCountry->Name = L"txtBoxSearchCountry";
			this->txtBoxSearchCountry->Size = System::Drawing::Size(204, 21);
			this->txtBoxSearchCountry->TabIndex = 7;
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
			this->btnPrev->Location = System::Drawing::Point(63, 105);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnPrev->Size = System::Drawing::Size(30, 21);
			this->btnPrev->TabIndex = 9;
			this->btnPrev->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnPrev->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
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
			this->btnNext->Location = System::Drawing::Point(135, 105);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(30, 21);
			this->btnNext->TabIndex = 10;
			this->btnNext->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &MainForm::btnNext_Click);
			// 
			// lblNum
			// 
			this->lblNum->AutoSize = true;
			this->lblNum->Location = System::Drawing::Point(99, 109);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Size = System::Drawing::Size(18, 13);
			this->lblNum->TabIndex = 12;
			this->lblNum->Text = L"№";
			// 
			// btnFirst
			// 
			this->btnFirst->BackColor = System::Drawing::SystemColors::Window;
			this->btnFirst->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnFirst->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->btnFirst->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFirst->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFirst.Image")));
			this->btnFirst->Location = System::Drawing::Point(27, 105);
			this->btnFirst->Name = L"btnFirst";
			this->btnFirst->Size = System::Drawing::Size(30, 21);
			this->btnFirst->TabIndex = 14;
			this->btnFirst->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnFirst->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
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
			this->btnLast->Location = System::Drawing::Point(171, 105);
			this->btnLast->Name = L"btnLast";
			this->btnLast->Size = System::Drawing::Size(30, 21);
			this->btnLast->TabIndex = 15;
			this->btnLast->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnLast->UseVisualStyleBackColor = false;
			this->btnLast->Click += gcnew System::EventHandler(this, &MainForm::btnLast_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 21;
			// 
			// lblCountryName
			// 
			this->lblCountryName->AutoSize = true;
			this->lblCountryName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16));
			this->lblCountryName->Location = System::Drawing::Point(226, 56);
			this->lblCountryName->Name = L"lblCountryName";
			this->lblCountryName->Size = System::Drawing::Size(141, 26);
			this->lblCountryName->TabIndex = 22;
			this->lblCountryName->Text = L"Назва держави";
			// 
			// txtBoxMainInfo
			// 
			this->txtBoxMainInfo->Location = System::Drawing::Point(231, 85);
			this->txtBoxMainInfo->Multiline = true;
			this->txtBoxMainInfo->Name = L"txtBoxMainInfo";
			this->txtBoxMainInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtBoxMainInfo->Size = System::Drawing::Size(283, 115);
			this->txtBoxMainInfo->TabIndex = 23;
			// 
			// pictCountryFlag
			// 
			this->pictCountryFlag->Location = System::Drawing::Point(520, 85);
			this->pictCountryFlag->Name = L"pictCountryFlag";
			this->pictCountryFlag->Size = System::Drawing::Size(226, 115);
			this->pictCountryFlag->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictCountryFlag->TabIndex = 24;
			this->pictCountryFlag->TabStop = false;
			// 
			// txtBoxFullInfo
			// 
			this->txtBoxFullInfo->Location = System::Drawing::Point(231, 206);
			this->txtBoxFullInfo->Multiline = true;
			this->txtBoxFullInfo->Name = L"txtBoxFullInfo";
			this->txtBoxFullInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtBoxFullInfo->Size = System::Drawing::Size(515, 310);
			this->txtBoxFullInfo->TabIndex = 23;
			// 
			// lstBoxSelectCountry
			// 
			this->lstBoxSelectCountry->FormattingEnabled = true;
			this->lstBoxSelectCountry->Location = System::Drawing::Point(10, 215);
			this->lstBoxSelectCountry->Name = L"lstBoxSelectCountry";
			this->lstBoxSelectCountry->Size = System::Drawing::Size(204, 173);
			this->lstBoxSelectCountry->TabIndex = 25;
			this->lstBoxSelectCountry->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lstBoxSelectCountry_MouseClick);
			this->lstBoxSelectCountry->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lstBoxSelectCountry_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20));
			this->label4->Location = System::Drawing::Point(12, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 31);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Географічний довідник";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12));
			this->label6->Location = System::Drawing::Point(6, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Виберіть країну";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 522);
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
			this->Name = L"MainForm";
			this->Text = L"Географічний довідник";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//глобальні змінні для операцій з бд
		DataSet ^ dataSet;
		OleDb::OleDbDataAdapter ^ oleDataAdapter;
		OleDb::OleDbConnection^ oleConnection;
		OleDb::OleDbCommand ^ oleCommand;

		//глобальні змінні
		int sel = 0;
		int linesCount = 0;
		int selCountry = 0;

	private: System::
		Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//запуск форми

		//створюємо датасет, конекшн, і команду
		dataSet = gcnew DataSet();
		oleConnection = gcnew OleDb::
			OleDbConnection( 
			"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
		oleCommand = gcnew OleDb::OleDbCommand();

		//під'єднуємося
		if (oleConnection->State == ConnectionState::Closed) 
			oleConnection->Open();

		//отримуємо дані
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);

		//заносимо в кеш
		oleDataAdapter->Fill(dataSet, "[table]");
		
		//отримуємо кількість заповнених рядків
		linesCount = (dataSet->Tables[0]->Rows->Count) - 1;
		
		lstBoxSelectCountry->Items->Clear();

		for(int i=0;i<linesCount;i++)
		{
			//заповнюємо комбобокс
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}

		//початкова ініціалізація
		selCountry = 1;
		lblNum->Text = Convert::ToString(selCountry);
		lstBoxSelectCountry->SelectedIndex = selCountry-1;
		
		//від'єднуємося від бази
		oleConnection->Close();
	}
private: System::Void lstBoxSelectCountry_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//вибір країни в лістбокс

		//створюємо датасет, конекшн, і команду
		dataSet = gcnew DataSet();
		oleConnection = gcnew OleDb::
			OleDbConnection(
				"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
		oleCommand = gcnew OleDb::OleDbCommand();

		//під'єднуємося
		if (oleConnection->State == ConnectionState::Closed)
			oleConnection->Open();

		//отримуємо індекс вибраного елементу
		selCountry = lstBoxSelectCountry->SelectedIndex;
		lblNum->Text = Convert::ToString(selCountry + 1);

		//якщо поле пошуку порожнє
		if (txtBoxSearchCountry->Text == "")
		{
			//отримуємо дані
			oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);
		}
		else
		{
			//якщо в полі пошуку є текст
			String^ search = txtBoxSearchCountry->Text;

			//отримуємо дані
			oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table] where [Назва] like ('%" + search + "%');", oleConnection);
		}

		//заносимо в кеш
		oleDataAdapter->Fill(dataSet, "[table]");

		//заповнюємо поля форми
		lblCountryName->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[1]);
		txtBoxMainInfo->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[2]);
		txtBoxFullInfo->Text = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[3]);

		//отримуємо малюнок і запихаємо в picturebox
		String^ imgLocation = Convert::ToString(dataSet->Tables[0]->Rows[selCountry]->ItemArray[4]);
		if (imgLocation != "") 
		{
			imgLocation = imgLocation->Remove(imgLocation->IndexOf("#"));
			pictCountryFlag->ImageLocation = imgLocation;
		}

		//вираховуємо кількість рядків таблиці
		linesCount = (dataSet->Tables[0]->Rows->Count) - 1;

		//від'єднуємося від бази
		oleConnection->Close();
	}
private: System::Void btnPrev_Click(System::Object^  sender, System::EventArgs^  e) {
	//йдемо до попереднього елемента
	if (selCountry >= 1)
	{
		lblNum->Text = Convert::ToString(Convert::ToInt32(lblNum->Text) - 1);
		selCountry--;
		lstBoxSelectCountry->SelectedIndex -= 1;
	}
}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	//йдемо до наступного елемента
	if (selCountry < linesCount - 1)
	{
		lblNum->Text = Convert::ToString(Convert::ToInt32(lblNum->Text) + 1);
		selCountry++;
		lstBoxSelectCountry->SelectedIndex += 1;
	}
}
private: System::Void btnFirst_Click(System::Object^  sender, System::EventArgs^  e) {
	//йдемо до першого елемента
	if (lstBoxSelectCountry->Items->Count != 1)
	{
		lblNum->Text = Convert::ToString(1);
		selCountry = 1;
		lstBoxSelectCountry->SelectedIndex = 0;
	}
}
private: System::Void btnLast_Click(System::Object^  sender, System::EventArgs^  e) {
	//йдемо до останнього елемента
	linesCount = lstBoxSelectCountry->Items->Count;
	if (linesCount != 1)
	{
		lblNum->Text = Convert::ToString(linesCount);
		selCountry = linesCount - 1;
		lstBoxSelectCountry->SelectedIndex = selCountry;
	}
}
private: System::Void txtBoxSearchCountry_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//введення тексту в пошуковий текстбокс

	//створюємо датасет, конекшн, і команду
	dataSet = gcnew DataSet();
	oleConnection = gcnew OleDb::
		OleDbConnection(
			"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");
	oleCommand = gcnew OleDb::OleDbCommand();

	//під'єднуємося
	if (oleConnection->State == ConnectionState::Closed)
		oleConnection->Open();

	lstBoxSelectCountry->Items->Clear();
	
	//якщо в полі є текст
	if(txtBoxSearchCountry->Text != "")
	{
		String^ search = txtBoxSearchCountry->Text;
		lstBoxSelectCountry->Items->Clear();

		//отримуємо дані
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table] where [Назва] like ('%" + search + "%');", oleConnection);

		//заносимо в кеш
		oleDataAdapter->Fill(dataSet, "[table]");

		for (int i = 0; i<dataSet->Tables[0]->Rows->Count; i++)
		{
			//заповнюємо комбобокс
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}
	}
	else
	{
		//виводимо всі дані
		//отримуємо дані
		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);
		//заносимо в кеш
		oleDataAdapter->Fill(dataSet, "[table]");

		for (int i = 0; i<dataSet->Tables[0]->Rows->Count; i++)
		{
			//заповнюємо комбобокс
			String^ country = Convert::ToString(dataSet->Tables[0]->Rows[i]->ItemArray[1]);
			lstBoxSelectCountry->Items->Add((Object^)country);
		}
	}
}
private: System::Void lstBoxSelectCountry_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//клік по лістбоксі
	lstBoxSelectCountry_SelectedIndexChanged( sender, e);
}
};
}