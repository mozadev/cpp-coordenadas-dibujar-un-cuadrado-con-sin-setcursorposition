#include<iostream>
#include<conio.h>

using namespace std;

void dibujacuadrado(char &c)

{
	for (int i = 1; i <= 3; i++)
	{
		for (int j=1; j <= 3; j++)
			cout << c;
		cout << endl;
	}

}

int main()
{

	char c;
	cout << "ingrese caracter";
	cin >> c;
	dibujacuadrado(c);
	_getch();

}