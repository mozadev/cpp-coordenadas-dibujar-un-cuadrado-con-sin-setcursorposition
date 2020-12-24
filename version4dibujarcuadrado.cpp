#include<iostream>
#include<conio.h>

using namespace std;

void dibujacuadrado(char &k)

{
	for (int i = 1; i <= 3; i++)
	{
		for (int j=1; j <= 3; j++)
			cout << k;
		cout << endl;
	}

}

int main()
{

	char c;
	char*puntero;
	puntero = &c;
	cout << "ingrese caracter";
	cin >> c;
	dibujacuadrado(*puntero);
	_getch();

}