#include "MyForm.h"
#include "AddForm.h"
#include <Windows.h>

using namespace DB;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


/*
// ��DataReader1.cpp: ������� ���� �������.
// ��������� ������ ��� ������ �� ������� �� MS Access � ������� ��
// �� ������� � ������� �������� Command � DataReader
#include <iostream>
using namespace System;
using namespace System::Data::OleDb;
int main(array<System::String ^> ^args)
{
	// ������ ���� ������ �� ������� ��� ������� ���������������:
	Console::ForegroundColor = ConsoleColor::White;

	// ������� ������ ������ Connection
	auto ϳ��������� = gcnew OleDbConnection();

	// �������� ��� ������ �����������:
	ϳ���������->ConnectionString = "Data Source=\"C:\\data_base.mdb\";User " +
		"ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";";
	ϳ���������->Open();

	// ������� ������ ������ Command:
	auto ������� = gcnew OleDbCommand();
	�������->Connection = ϳ���������;

	// �������� ��� SQL-�������:
	�������->CommandText = "Select * From [table]";

	// ������� ��� ������ � ����������� �� �� ������� "���":
	// �������->CommandText = "Select * From [�� ���������] order by ���";

	// ���������� �� ������� "����� �/�":
	// �������->CommandText =
	// "Select * From [�� ���������] ORDER BY '����� �/�'";

	// ��������� SQL-�������:
	OleDbDataReader ^ �������� = �������->
		ExecuteReader(System::Data::CommandBehavior::CloseConnection);

	Console::WriteLine("������� ��:\n");
	while (��������->Read() == true)
		// ����, ���� �� ����� ��������� ��� ������.
		// ��������->FieldCount - ���������� ����� � ������.
		// ����� ��� ����: 0, 1 � 2.
		// ����� ��������� ������ �����:
		Console::WriteLine("{0,-3} {1,-15} {2,-15} {3,-15} {4,-15} {5,-15}", ��������->GetValue(0),
		��������->GetValue(1), ��������->GetValue(2), ��������->GetValue(3), ��������->GetValue(4), ��������->GetValue(5));
	
��������->Close(); 
ϳ���������->Close();

	// ������������� ���������� ��������� �� ������� �����-������ �������:
	Console::ReadKey();
	return 0;
}
*/