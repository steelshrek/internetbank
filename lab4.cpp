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
	cout << "Input À: ";
	cin >> a;
	cout << "Input B: ";
	cin >> b;
	(a % 2 = 0 && b % 2 = 0) ? cout << "À & Â is not odd" : cout << "Condition isn't met";


}
