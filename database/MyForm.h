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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(0, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(647, 367);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Навігація по таблиці";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пошук по базі даних";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 70);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(493, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 21);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавити";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(76, 25);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(30, 21);
			this->button2->TabIndex = 9;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(148, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 21);
			this->button3->TabIndex = 10;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Window;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(412, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 21);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Зберегти";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"№";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Window;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(40, 25);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 21);
			this->button5->TabIndex = 14;
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Window;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(184, 25);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 21);
			this->button6->TabIndex = 15;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Window;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->Location = System::Drawing::Point(493, 70);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 21);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Видалити";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(281, 70);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 21);
			this->comboBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(387, 70);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 21);
			this->textBox3->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(278, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Видалення записів";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->Location = System::Drawing::Point(0, 97);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(647, 367);
			this->dataGridView2->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(130, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 464);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"База даних";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		DataSet ^ НабірДаних;
		OleDb::OleDbDataAdapter ^ Адаптер;
		OleDb::OleDbConnection^ Підключення;
		OleDb::OleDbCommand ^ Команда;
		int sel=0;
	private: System::
		Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView2->Visible = false;
		textBox1->Text = "";
		textBox3->Text = "";

		comboBox1->Items->Clear();
		comboBox2->Items->Clear();

		comboBox1->Items->Add((Object^)"Номер");
		comboBox1->Items->Add((Object^)"Прізвище");
		comboBox1->Items->Add((Object^)"Ім'я");
		comboBox1->Items->Add((Object^)"По-батькові");
		comboBox1->Items->Add((Object^)"Телефон");
		comboBox1->Items->Add((Object^)"Адреса");

		comboBox1->SelectedIndex = 0;

		comboBox2->Items->Add((Object^)"Номер");
		comboBox2->Items->Add((Object^)"Прізвище");
		comboBox2->Items->Add((Object^)"Ім'я");
		comboBox2->Items->Add((Object^)"По-батькові");
		comboBox2->Items->Add((Object^)"Телефон");
		comboBox2->Items->Add((Object^)"Адреса");

		comboBox2->SelectedIndex = 0;

		НабірДаних = gcnew DataSet();

		Підключення = gcnew OleDb::
			OleDbConnection( 
			"Data Source=\"database.mdb\";User " +
			"ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");

		Команда = gcnew OleDb::OleDbCommand();

		if (Підключення->State == ConnectionState::Closed) 
			Підключення->Open();

		Адаптер = gcnew OleDb::OleDbDataAdapter("Select * From [table]", Підключення);

		Адаптер->Fill(НабірДаних, "[table]");

		String ^ СтрокаXML = НабірДаних->GetXml();

		dataGridView1->DataSource = НабірДаних;

		dataGridView1->DataMember = "[table]";

		Підключення->Close();

		dataGridView1->Rows[sel]->Selected = true;

		label5->Text = Convert::ToString(sel + 1);
	}
	private: System::Void button2_Click(System::Object^ sender,
		System::EventArgs^ e)
	{ 
		// івент для кнопки збереження
		Команда->CommandText = "UPDATE [table] SET [Прізвище] = ?, [Ім'я] = ?, [По-батькові] = ?, [Номер телефону] = ?, [Адреса] = ? WHERE ([Номер] = ?)";
		
		Команда->Parameters->Add("Прізвище", OleDb::OleDbType::VarWChar, 50, "Прізвище");
		Команда->Parameters->Add("Ім'я", OleDb::OleDbType::VarWChar, 50, "Ім'я");
		Команда->Parameters->Add("По-батькові", OleDb::OleDbType::VarWChar, 50, "По-батькові");
		Команда->Parameters->Add("Номер телефону", OleDb::OleDbType::VarWChar, 50, "Номер телефону");
		Команда->Parameters->Add("Адреса", OleDb::OleDbType::VarWChar, 50, "Адреса");
		Команда->Parameters->Add(gcnew OleDb::OleDbParameter("Original_Номер",OleDb::OleDbType::Integer,0, System::Data::ParameterDirection::
			Input, false, (Byte)0, (Byte)0, "Номер", System::Data::DataRowVersion::Original, nullptr));
		
		Адаптер->UpdateCommand = Команда;
		
		Команда->Connection = Підключення;
		try
		{
			int kol = Адаптер->Update(НабірДаних, "[table]");
			MessageBox::Show("Оновлено " + kol + " рядків");
		}
		catch (Exception ^ Ситуация)
		{
			MessageBox::Show(Ситуация->Message, "Помилка");
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->Visible = false;
		dataGridView2->Visible = true;

		Підключення = gcnew OleDb::OleDbConnection(
			"Data Source=\"database.mdb\";User " +
			"ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");

		Команда = gcnew OleDb::OleDbCommand();

		if (Підключення->State == ConnectionState::Closed) 
			Підключення->Open();

		switch (comboBox1->SelectedIndex) {
			case 0:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [Номер] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
			case 1:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [Прізвище] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
			case 2:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [Ім'я] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
			case 3:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [По-батькові] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
			case 4:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [Номер телефону] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
			case 5:
			{
				Адаптер = gcnew OleDb::OleDbDataAdapter(
					"Select * From [table] where [Адреса] like ('" + textBox1->Text + "')", Підключення);
				break;
			}
		}
		//Адаптер = gcnew OleDb::OleDbDataAdapter(
		//	"Select * From [table] where [Номер] like ('"+textBox1->Text+"')", Підключення);
		try
		{
			Адаптер->Fill(НабірДаних, "[table]");
			dataGridView2->DataSource = НабірДаних;
			dataGridView2->DataMember = "[table]";

			Підключення->Close();
			for (int i = 0; i < dataGridView1->RowCount - 2; i++)
			{
				dataGridView2->CurrentCell = nullptr;
				dataGridView2->Rows[i]->Visible = false;
			}
			if (textBox1->Text == "")
			{
				dataGridView1->Visible = true;
				dataGridView2->Visible = false;
				dataGridView1->CurrentCell = nullptr;
				dataGridView1->Rows[dataGridView1->RowCount - 2]->Visible = false;
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Помилка" + e);
		}

		/*
		//DataView^ DV = gcnew DataView(НабірДаних->Tables["tabl"], "Номер = '2'", "ContactName", DataViewRowState::CurrentRows);
		//DataView^ DV = НабірДаних;
		DataView^ DV = gcnew DataView();
		switch (comboBox1->SelectedIndex)
		{
		case 0:
		{
			DV->RowFilter = System::String::Format("Номер LIKE '%{0}%'", textBox1->Text);
			break;
		}
		case 1:
		{
			DV->RowFilter = System::String::Format("Ім'я LIKE '%{0}%'", textBox1->Text);
			break;
		}
		case 2:
		{
			DV->RowFilter = System::String::Format("Прізвище LIKE '%{0}%'", textBox1->Text);
			break;
		}
		case 3:
		{
			DV->RowFilter = System::String::Format("По-батькові LIKE '%{0}%'", textBox1->Text);
			break;
		}
		case 4:
		{
			DV->RowFilter = System::String::Format("Номер телефону LIKE '%{0}%'", textBox1->Text);
			break;
		}
		case 5:
		{
			DV->RowFilter = System::String::Format("Адреса LIKE '%{0}%'", textBox1->Text);
			break;
		}
		}
		dataGridView1->DataSource = DV;
		dataGridView2->DataMember = "[table]";
		*/
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AddForm obj;

	obj.ShowDialog();
	
	auto Підключення = gcnew OleDb::OleDbConnection(
		"Provider=\"Microsoft.Jet.OLEDB.4.0\";Data Source=\"database.mdb\";");
	
	Підключення->Open();
	
	if (obj.DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			String^ a1 = obj.textBox1->Text;
			String^ a2 = obj.textBox2->Text;
			String^ a3 = obj.textBox3->Text;
			String^ a4 = obj.textBox4->Text;
			String^ a5 = obj.textBox5->Text;

			auto Команда = gcnew OleDbCommand(
				"INSERT INTO [table] (" +
				"[Прізвище], [Ім'я], [По-батькові], [Номер телефону], [Адреса]) VALUES ('" + a1 + "','" + a2 + "','" + a3 + "','" + a4 + "','" + a5 + "');");
			
			Команда->Connection = Підключення;
			Команда->ExecuteNonQuery();
			Підключення->Close();
			
			MessageBox::Show("В базу даних додано запис!");
		}
		catch (...)
		{
			MessageBox::Show("помилка!");

		}
	}

	MyForm_Load(sender, e);
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	label5->Text = Convert::ToString(sel+1);

	if (sel != 0)
	{
		sel--;
		dataGridView1->ClearSelection();
		dataGridView1->Rows[sel]->Selected = true;
	}

	label5->Text = Convert::ToString(sel+1);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	label5->Text = Convert::ToString(sel+1);

	if (sel != dataGridView1->RowCount-1)
	{
		sel++;
		dataGridView1->ClearSelection();
		dataGridView1->Rows[sel]->Selected = true;
	}
	
	label5->Text = Convert::ToString(sel+1);

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	label5->Text = Convert::ToString(sel+1);
	dataGridView1->ClearSelection();
	sel = dataGridView1->RowCount-1;
	dataGridView1->Rows[sel]->Selected = true;
	label5->Text = Convert::ToString(sel+1);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	label5->Text = Convert::ToString(sel+1);
	dataGridView1->ClearSelection();
	sel = 0;
	dataGridView1->Rows[sel]->Selected = true;
	label5->Text = Convert::ToString(sel+1);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	auto Підключення = gcnew OleDb::OleDbConnection(
		"Provider=\"Microsoft.Jet.OLEDB.4.0\";Data Source=\"database.mdb\";");

	Підключення->Open();
	
	try
	{
		switch (comboBox2->SelectedIndex) 
		{
			case 0:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Номер like " + Convert::ToInt32(textBox3->Text), Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
			case 1:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where [Прізвище] like ('" + textBox3->Text + "')", Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
			case 2:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Ім'я like ('" + textBox3->Text + "')", Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
			case 3:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where По-батькові like ('" + textBox3->Text + "')", Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
			case 4:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where [Номер телефону] like ('" + Convert::ToInt32(textBox3->Text) + "')", Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
			case 5:
			{
				auto Команда = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Адреса like " + textBox3->Text + "')", Підключення);
				Команда->ExecuteNonQuery();
				break;
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Помилка!\n" + e);
	}

	MessageBox::Show("Видалено!");

	Підключення->Close();

	MyForm_Load(sender, e);
}
};
}