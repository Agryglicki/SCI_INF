#include <iostream>
#include "sort.h"
using namespace std;
int main()
{

	cout << "Nieposortowany zbior" << endl;
		sortowanie zbior;
		zbior.wyswietl();
		cout << endl << "Wybierz algorytm sortujacy" << endl;
		cout << "1 - Sortowanie babelkowe" << endl;
		cout << "2 - Sortowanie przez wstawianie" << endl;
		int a = 0;
		cin >> a;
		if (a == 1)
		{
			cout << "sortowanie babelkowe" << endl;
			zbior.bubble();
			zbior.wyswietl();
		}
		else if (a == 2)
		{
			cout << "sortowanie wstawianie" << endl;
			zbior.wstawianie();
			zbior.wyswietl();
		}
		else
		{
			cout << "podano zla wartosc" << endl;
		}
}