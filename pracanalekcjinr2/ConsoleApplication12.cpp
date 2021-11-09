#include <iostream>
#include <string>
#include "cezar.h"
using namespace std;

int main()
{
	string tekst;
	string tekstsz;
	cezar sz;
	cout << "Wprowadz tekst" << endl;
	getline(cin, tekst);
	cout << "Wybierz opcje " << "bedziemy szyfrowac" << endl;
	cout << "1 - Szyfr cezara" << endl;
	cout << "2 - Szyfr przestawieniowy" << endl;
	cout << "3 - Oby dwa szyfry" << endl;
	cout << "4 - Deszyfrowanie cezara" << endl;
	int decyzja;
	cin >> decyzja;
	if (decyzja == 1)
	{
		tekstsz = sz.shcezar(tekst);
		cout << "zaszyfrowany tekst: " << tekstsz << endl;
	}
	else if (decyzja == 2)
	{
		tekstsz = sz.pprzestawianie(tekst);
		cout << "zaszyfrowany tekst: " << tekstsz << endl;
	}
	else if (decyzja == 3)
	{
		tekstsz = sz.wwszystko(tekst);
		cout << "zaszyfrowany tekst: " << tekstsz << endl;
	}
	else if (decyzja == 4)
	{
		tekstsz = sz.dcezar(tekst);
		cout << "deszyfrowany tekst: " << tekstsz << endl;
	}
	else
	{
		cout << "nie zrozumialem" << endl;
	}
}