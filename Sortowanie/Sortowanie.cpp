#include <iostream>
#include <fstream>
#include <chrono>
#include "sort.h"
using namespace std;
int main()
{
	ofstream ofs("times.txt");
	

	cout << "Nieposortowany zbior" << endl;
		sortowanie zbior;
		zbior.wyswietl();
		cout << endl << "Wybierz algorytm sortujacy" << endl;
		cout << "1 - Sortowanie babelkowe" << endl;
		cout << "2 - Sortowanie przez wstawianie" << endl;
		cout << "3 - Sortowanie przez wybor" << endl;
		cout << "4 - Sortowanie Quick Sort" << endl;
		int a = 0;
		cin >> a;
		if (a == 1)
		{
			cout << "sortowanie babelkowe" << endl;
			
			auto start = chrono::steady_clock::now();
			zbior.bubble();
			auto end = chrono::steady_clock::now();
			chrono::duration <double> sec = end - start;
			cout << "---- Bub ----\n Time: " << sec.count() << "s\n";
			
		}
		else if (a == 2)
		{
			auto start = chrono::steady_clock::now();
			zbior.wstawianie();
			auto end = chrono::steady_clock::now();
			chrono::duration <double> sec = end - start;
			cout << "---- Wstawianie ----\n Time: " << sec.count() << "s\n";
			
		}
		else if (a == 3)
		{
			cout << "sortowanie wyborowe" << endl;
			auto start = chrono::steady_clock::now();
			zbior.wybor();
			auto end = chrono::steady_clock::now();
			chrono::duration <double> sec = end - start;
			cout << "---- Wybor ----\n Time: " << sec.count() << "s\n";
		
		}
		else if (a == 4)
		{
			int n = zbior.vek.size() - 1 ;
			zbior.quickS(0, n);
			zbior.wyswietl();
		}
		else
		{
			cout << "podano zla wartosc" << endl;
		}
		ofs.close();
}