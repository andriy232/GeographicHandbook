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
// БДDataReader1.cpp: главный файл проекта.
// Программа читает все записи из таблицы БД MS Access и выводит их
// на консоль с помощью объектов Command и DataReader
#include <iostream>
using namespace System;
using namespace System::Data::OleDb;
int main(array<System::String ^> ^args)
{
	// Задаем цвет текста на консоли для большей выразительности:
	Console::ForegroundColor = ConsoleColor::White;

	// Создаем объект класса Connection
	auto Підключення = gcnew OleDbConnection();

	// Передаем ему строку подключения:
	Підключення->ConnectionString = "Data Source=\"C:\\data_base.mdb\";User " +
		"ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";";
	Підключення->Open();

	// Создаем объект класса Command:
	auto Команда = gcnew OleDbCommand();
	Команда->Connection = Підключення;

	// Передаем ему SQL-команду:
	Команда->CommandText = "Select * From [table]";

	// Выбрать все записи и сортировать их по колонке "ФИО":
	// Команда->CommandText = "Select * From [БД телефонов] order by ФИО";

	// Аналогично по колонке "Номер п/п":
	// Команда->CommandText =
	// "Select * From [БД телефонов] ORDER BY 'Номер п/п'";

	// Выполняем SQL-команду:
	OleDbDataReader ^ Читатель = Команда->
		ExecuteReader(System::Data::CommandBehavior::CloseConnection);

	Console::WriteLine("Таблица БД:\n");
	while (Читатель->Read() == true)
		// Цикл, пока не будут прочитаны все записи.
		// Читатель->FieldCount - количество полей в строке.
		// Здесь три поля: 0, 1 и 2.
		// Минус прижимает строку влево:
		Console::WriteLine("{0,-3} {1,-15} {2,-15} {3,-15} {4,-15} {5,-15}", Читатель->GetValue(0),
		Читатель->GetValue(1), Читатель->GetValue(2), Читатель->GetValue(3), Читатель->GetValue(4), Читатель->GetValue(5));
	
Читатель->Close(); 
Підключення->Close();

	// Приостановить выполнение программы до нажатия какой-нибудь клавиши:
	Console::ReadKey();
	return 0;
}
*/