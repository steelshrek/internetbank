// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть А: ";
	cin >> a;
	cout << "Введіть B: ";
	cin >> b;
	(a % 2 != 0 && b % 2 != 0) ? cout << "А і В непарні" : cout << "Умова не виконується";


}
