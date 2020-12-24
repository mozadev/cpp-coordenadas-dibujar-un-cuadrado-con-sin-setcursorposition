// ConsoleApplication3.cpp : main project file.

#include "stdafx.h"

#include<iostream>
#include<conio.h>

using namespace System;
using namespace std;




void dibujacuadrado(char &k, int *x, int &y)

{
	for (int i = 1; i <= 3; i++)

	{
		Console::SetCursorPosition(*x, y + i);
		Console::BackgroundColor = ConsoleColor::Red;
		Console::ForegroundColor = ConsoleColor::Blue;
		for (int j = 1; j <= 3; j++)
			cout << k;
		cout << endl;
	}

}

int main()
{

	char c;
	int x, y;
	char*puntero;
	puntero = &c;

	cout << "ingrese caracter:"; cin >> c;
	cout << "ingrese x : "; cin >> x;
	cout << "ingrese y : "; cin >> y;

	dibujacuadrado(*puntero, &x, y);
	_getch();

}