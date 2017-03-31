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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbBoxSelectCountry;
	private: System::Windows::Forms::TextBox^  txtBoxSearchCountry;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCountryName;
	private: System::Windows::Forms::TextBox^  txtBoxMainInfo;
	private: System::Windows::Forms::PictureBox^  pictCountryFlag;




	private: System::Windows::Forms::TextBox^  txtBoxFullInfo;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbBoxSelectCountry = (gcnew System::Windows::Forms::ComboBox());
			this->txtBoxSearchCountry = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCountryName = (gcnew System::Windows::Forms::Label());
			this->txtBoxMainInfo = (gcnew System::Windows::Forms::TextBox());
			this->pictCountryFlag = (gcnew System::Windows::Forms::PictureBox());
			this->txtBoxFullInfo = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(0, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(727, 101);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(309, 50);
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
			// cmbBoxSelectCountry
			// 
			this->cmbBoxSelectCountry->FormattingEnabled = true;
			this->cmbBoxSelectCountry->Location = System::Drawing::Point(40, 70);
			this->cmbBoxSelectCountry->Name = L"cmbBoxSelectCountry";
			this->cmbBoxSelectCountry->Size = System::Drawing::Size(100, 21);
			this->cmbBoxSelectCountry->TabIndex = 6;
			// 
			// txtBoxSearchCountry
			// 
			this->txtBoxSearchCountry->Location = System::Drawing::Point(146, 70);
			this->txtBoxSearchCountry->Multiline = true;
			this->txtBoxSearchCountry->Name = L"txtBoxSearchCountry";
			this->txtBoxSearchCountry->Size = System::Drawing::Size(100, 21);
			this->txtBoxSearchCountry->TabIndex = 7;
			this->txtBoxSearchCountry->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(348, 70);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(30, 21);
			this->button2->TabIndex = 9;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
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
			this->button3->Location = System::Drawing::Point(420, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 21);
			this->button3->TabIndex = 10;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(384, 74);
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
			this->button5->Location = System::Drawing::Point(312, 70);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 21);
			this->button5->TabIndex = 14;
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
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
			this->button6->Location = System::Drawing::Point(456, 70);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 21);
			this->button6->TabIndex = 15;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->Location = System::Drawing::Point(0, 97);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(727, 101);
			this->dataGridView2->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(402, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 21;
			// 
			// lblCountryName
			// 
			this->lblCountryName->AutoSize = true;
			this->lblCountryName->Location = System::Drawing::Point(73, 205);
			this->lblCountryName->Name = L"lblCountryName";
			this->lblCountryName->Size = System::Drawing::Size(86, 13);
			this->lblCountryName->TabIndex = 22;
			this->lblCountryName->Text = L"Назва держави";
			// 
			// txtBoxMainInfo
			// 
			this->txtBoxMainInfo->Location = System::Drawing::Point(76, 227);
			this->txtBoxMainInfo->Multiline = true;
			this->txtBoxMainInfo->Name = L"txtBoxMainInfo";
			this->txtBoxMainInfo->Size = System::Drawing::Size(193, 75);
			this->txtBoxMainInfo->TabIndex = 23;
			// 
			// pictCountryFlag
			// 
			this->pictCountryFlag->Location = System::Drawing::Point(348, 217);
			this->pictCountryFlag->Name = L"pictCountryFlag";
			this->pictCountryFlag->Size = System::Drawing::Size(161, 101);
			this->pictCountryFlag->TabIndex = 24;
			this->pictCountryFlag->TabStop = false;
			// 
			// txtBoxFullInfo
			// 
			this->txtBoxFullInfo->Location = System::Drawing::Point(79, 327);
			this->txtBoxFullInfo->Multiline = true;
			this->txtBoxFullInfo->Name = L"txtBoxFullInfo";
			this->txtBoxFullInfo->Size = System::Drawing::Size(248, 156);
			this->txtBoxFullInfo->TabIndex = 23;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 532);
			this->Controls->Add(this->pictCountryFlag);
			this->Controls->Add(this->txtBoxFullInfo);
			this->Controls->Add(this->txtBoxMainInfo);
			this->Controls->Add(this->lblCountryName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtBoxSearchCountry);
			this->Controls->Add(this->cmbBoxSelectCountry);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"База даних";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictCountryFlag))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		DataSet ^ dataSet;
		OleDb::OleDbDataAdapter ^ oleDataAdapter;
		OleDb::OleDbConnection^ oleConnection;
		OleDb::OleDbCommand ^ oleCommand;

		int sel=0;
	private: System::
		Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView2->Visible = false;

		cmbBoxSelectCountry->Items->Clear();

		cmbBoxSelectCountry->Items->Add((Object^)"Номер");
		cmbBoxSelectCountry->Items->Add((Object^)"Прізвище");
		cmbBoxSelectCountry->Items->Add((Object^)"Ім'я");
		cmbBoxSelectCountry->Items->Add((Object^)"По-батькові");
		cmbBoxSelectCountry->Items->Add((Object^)"Телефон");
		cmbBoxSelectCountry->Items->Add((Object^)"Адреса");

		cmbBoxSelectCountry->SelectedIndex = 0;


		dataSet = gcnew DataSet();

		oleConnection = gcnew OleDb::
			OleDbConnection( 
			"Data Source=\"database.mdb\"; User ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");

		oleCommand = gcnew OleDb::OleDbCommand();

		if (oleConnection->State == ConnectionState::Closed) 
			oleConnection->Open();

		oleDataAdapter = gcnew OleDb::OleDbDataAdapter("Select * From [table]", oleConnection);

		oleDataAdapter->Fill(dataSet, "[table]");

		String ^ СтрокаXML = dataSet->GetXml();

		txtBoxFullInfo->Text = dataSet->GetXml();
		//pictCountryFlag->InitialImage

		//dataGridView1->DataSource = dataSet;

		//dataGridView1->DataMember = "[table]";

		oleConnection->Close();

		//dataGridView1->Rows[sel]->Selected = true;

		label5->Text = Convert::ToString(sel + 1);
	}
	private: System::Void button2_Click(System::Object^ sender,
		System::EventArgs^ e)
	{ 
		// івент для кнопки збереження
		oleCommand->CommandText = "UPDATE [table] SET [Прізвище] = ?, [Ім'я] = ?, [По-батькові] = ?, [Номер телефону] = ?, [Адреса] = ? WHERE ([Номер] = ?)";
		
		oleCommand->Parameters->Add("Прізвище", OleDb::OleDbType::VarWChar, 50, "Прізвище");
		oleCommand->Parameters->Add("Ім'я", OleDb::OleDbType::VarWChar, 50, "Ім'я");
		oleCommand->Parameters->Add("По-батькові", OleDb::OleDbType::VarWChar, 50, "По-батькові");
		oleCommand->Parameters->Add("Номер телефону", OleDb::OleDbType::VarWChar, 50, "Номер телефону");
		oleCommand->Parameters->Add("Адреса", OleDb::OleDbType::VarWChar, 50, "Адреса");
		oleCommand->Parameters->Add(gcnew OleDb::OleDbParameter("Original_Номер",OleDb::OleDbType::Integer,0, System::Data::ParameterDirection::
			Input, false, (Byte)0, (Byte)0, "Номер", System::Data::DataRowVersion::Original, nullptr));
		
		oleDataAdapter->UpdateCommand = oleCommand;
		
		oleCommand->Connection = oleConnection;
		try
		{
			int kol = oleDataAdapter->Update(dataSet, "[table]");
			MessageBox::Show("Оновлено " + kol + " рядків");
		}
		catch (Exception ^ Ситуация)
		{
			MessageBox::Show(Ситуация->Message, "Помилка");
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//dataGridView1->Visible = false;
		//dataGridView2->Visible = true;

		//oleConnection = gcnew OleDb::OleDbConnection(
		//	"Data Source=\"database.mdb\";User " +
		//	"ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");

		//oleCommand = gcnew OleDb::OleDbCommand();

		//if (oleConnection->State == ConnectionState::Closed) 
		//	oleConnection->Open();

		//switch (cmbBoxSelectCountry->SelectedIndex) {
		//	case 0:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [Номер] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//	case 1:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [Прізвище] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//	case 2:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [Ім'я] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//	case 3:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [По-батькові] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//	case 4:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [Номер телефону] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//	case 5:
		//	{
		//		oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		//			"Select * From [table] where [Адреса] like ('" + textBox1->Text + "')", oleConnection);
		//		break;
		//	}
		//}
		////oleDataAdapter = gcnew OleDb::OleDbDataAdapter(
		////	"Select * From [table] where [Номер] like ('"+textBox1->Text+"')", oleConnection);
		//try
		//{
		//	oleDataAdapter->Fill(dataSet, "[table]");
		//	dataGridView2->DataSource = dataSet;
		//	dataGridView2->DataMember = "[table]";

		//	oleConnection->Close();
		//	for (int i = 0; i < dataGridView1->RowCount - 2; i++)
		//	{
		//		dataGridView2->CurrentCell = nullptr;
		//		dataGridView2->Rows[i]->Visible = false;
		//	}
		//	if (textBox1->Text == "")
		//	{
		//		dataGridView1->Visible = true;
		//		dataGridView2->Visible = false;
		//		dataGridView1->CurrentCell = nullptr;
		//		dataGridView1->Rows[dataGridView1->RowCount - 2]->Visible = false;
		//	}
		//}
		//catch (Exception^ e)
		//{
		//	MessageBox::Show("Помилка" + e);
		//}

		/*
		//DataView^ DV = gcnew DataView(dataSet->Tables["tabl"], "Номер = '2'", "ContactName", DataViewRowState::CurrentRows);
		//DataView^ DV = dataSet;
		DataView^ DV = gcnew DataView();
		switch (cmbBoxSelectCountry->SelectedIndex)
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
	
	auto oleConnection = gcnew OleDb::OleDbConnection(
		"Provider=\"Microsoft.Jet.OLEDB.4.0\";Data Source=\"database.mdb\";");
	
	oleConnection->Open();
	
	if (obj.DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			String^ a1 = obj.textBox1->Text;
			String^ a2 = obj.textBox2->Text;
			String^ a3 = obj.textBox3->Text;
			String^ a4 = obj.textBox4->Text;
			String^ a5 = obj.textBox5->Text;

			auto oleCommand = gcnew OleDbCommand(
				"INSERT INTO [table] (" +
				"[Прізвище], [Ім'я], [По-батькові], [Номер телефону], [Адреса]) VALUES ('" + a1 + "','" + a2 + "','" + a3 + "','" + a4 + "','" + a5 + "');");
			
			oleCommand->Connection = oleConnection;
			oleCommand->ExecuteNonQuery();
			oleConnection->Close();
			
			MessageBox::Show("В базу даних додано запис!");
		}
		catch (...)
		{
			MessageBox::Show("помилка!");

		}
	}

	MainForm_Load(sender, e);
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
	auto oleConnection = gcnew OleDb::OleDbConnection(
		"Provider=\"Microsoft.Jet.OLEDB.4.0\";Data Source=\"database.mdb\";");

	oleConnection->Open();
	
	try
	{/*
		switch (comboBox2->SelectedIndex) 
		{
			case 0:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Номер like " + Convert::ToInt32(textBox3->Text), oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
			case 1:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where [Прізвище] like ('" + textBox3->Text + "')", oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
			case 2:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Ім'я like ('" + textBox3->Text + "')", oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
			case 3:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where По-батькові like ('" + textBox3->Text + "')", oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
			case 4:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where [Номер телефону] like ('" + Convert::ToInt32(textBox3->Text) + "')", oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
			case 5:
			{
				auto oleCommand = gcnew Data::OleDb::OleDbCommand(
					"Delete * From [table] Where Адреса like " + textBox3->Text + "')", oleConnection);
				oleCommand->ExecuteNonQuery();
				break;
			}
		}*/
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Помилка!\n" + e);
	}

	MessageBox::Show("Видалено!");

	oleConnection->Close();

	MainForm_Load(sender, e);
}
};
}