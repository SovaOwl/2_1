﻿/*Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.

Если пользователь ввёл некорректный номер месяца - сообщите ему об этом

Спрашивайте пользователя до тех пор, пока он не введёт 0*/

#include <iostream>

using namespace std;

enum month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	setlocale(LC_ALL, "Rus");

	int input;

	do
	{
		cout << "Введите номер месяца: ";
		cin >> input;

		switch (input)
		{
		case 0:
			if (input == 0)
			{
				cout << "До свидания";
				break;
			}
		case 1:
			if (input == month::January)
			{
				cout << "Январь" << endl;
			}
		case 2:
			if (input == month::February)
			{
				cout << "Февраль" << endl;
			}
		case 3:
			if (input == month::March)
			{
				cout << "Март" << endl;
			}
		case 4:
			if (input == month::April)
			{
				cout << "Апрель" << endl;
			}
		case 5:
			if (input == month::May)
			{
				cout << "Май" << endl;
			}
		case 6:
			if (input == month::June)
			{
				cout << "Июнь" << endl;
			}
		case 7:
			if (input == month::July)
			{
				cout << "Июль" << endl;
			}
		case 8:
			if (input == month::August)
			{
				cout << "Август" << endl;
			}
		case 9:
			if (input == month::September)
			{
				cout << "Сентябрь" << endl;
			}
		case 10:
			if (input == month::October)
			{
				cout << "Октябрь" << endl;
			}
		case 11:
			if (input == month::November)
			{
				cout << "Ноябрь" << endl;
			}
		case 12:
			if (input == month::December)
			{
				cout << "Декабрь" << endl;
			}
		default:
			if (input > 12 || input < 0)
			{
				cout << "Неправильный номер!" << endl;
				break;
			}
		}
	} while (input != 0);
}