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

int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
		if (((a%m) * (x%m)) % m == 1)
			return x;
}

string cezar::RSA(string tekstw)
{
	int liczba1;
	int liczba2;
	cout << "podaj 1 liczbe pierwsza" << endl;
	cin >> liczba1;
	cout << "podaj 2 liczbe pierwsza" << endl;
	cin >> liczba2;

	int n = liczba1 * liczba2;
	int euler = (liczba1 - 1)*(liczba2 - 1);
	cout << "podaj liczbe od 1 do " << euler << endl;
	cout << "liczba ta i " << euler <<" ma byc wzglednie pierwsza" << endl;
	int e;
	cin >> e;
	int d = modInverse(e, euler);
	pair<int, int> publiczny;
	publiczny.first = n;
	publiczny.second = e;
	cout << "klucz publiczny: " << publiczny.first << " " << publiczny.second << endl;
	pair<int, int> prywatny;
	prywatny.first = n;
	prywatny.second = d;
	cout << "klucz prywatny: " << prywatny.first << " " << prywatny.second << endl;
	return " ";
}