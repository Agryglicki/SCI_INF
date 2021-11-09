#include "cezar.h"
#include <iostream>
#include <string>

string cezar::shcezar(string tekstw)
{
	string tog;
	cout << "Podaj zmienna szyfrowania od 1 do 26" << endl;
	int liczba;
	cin >> liczba;
	for (int i = 0; i < tekstw.size(); i++)
	{
		if (tekstw[i] >= 96)
		{
			unsigned char t;
			t = tekstw[i] + liczba;
			if (t >= 123)
			{
				t = (t % 123) + 97;
			}
			tog += t;
		}
		else
		{
			tog += tekstw[i];
		}
	}
	return tog;
}
string cezar::dcezar(string tekstw)
{
	string tog;
	cout << "Podaj zmienna szyfrowania od 1 do 26" << endl;
	int liczba;
	cin >> liczba;
	for (int i = 0; i < tekstw.size(); i++)
	{
		if (tekstw[i] >= 96)
		{
			unsigned char t;
			t = tekstw[i] - liczba;
			if (t <= 96)
			{
				char x = (tekstw[i] % 97) + 123;
				x -= liczba;
				t = x;
			}
			tog += t;
		}
		else
		{
			tog += tekstw[i];
		}
	}
	return tog;
}

string cezar::pprzestawianie(string tekstw)
{
	string tog;
	for (int i = 0; i < tekstw.size() - 1; i += 2)
	{
		swap(tekstw[i], tekstw[i + 1]);
		tog += tekstw[i];
		tog += tekstw[i + 1];
	}
	if (tekstw.size() % 2 == 1)
	{
		tog += tekstw[tekstw.size() - 1];
	}
	return tog;
}

string cezar::wwszystko(string tekstw)
{
	string t;
	string tekstt;
	tekstt = shcezar((pprzestawianie(tekstw)));
	return tekstt;
}