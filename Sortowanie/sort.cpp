#include "sort.h"
sortowanie::sortowanie()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		temp = rand() % 1000;
		vek.push_back(temp);
	}
}

void sortowanie::bubble()
{
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 100; i++)
		{
			if (i != 99)
			{
				if (vek[i] > vek[i + 1])
				{
					temp = vek[i];
					temp1 = vek[i + 1];
					vek[i] = temp1;
					vek[i + 1] = temp;
				}
			}
		}
	}
}

void sortowanie::wstawianie()
{
	int x, i;
	vector <int> temp = vek;
	for (int j = 99; j >= 0; j--)
	{
		x = temp[j];
		i = j + 1;
		while ((i < 100) && (x > temp[i]))
		{
			temp[i - 1] = temp[i];
			i++;
		}
		temp[i - 1] = x;
	}
	vek = temp;
}

void sortowanie::wybor()
{
	int mini;
	for (int i = 0; i < vek.size(); i++)
	{
		mini = i;
		for (int j = i + 1; j < vek.size(); j++)
		{
			if (vek[j] < vek[mini])
			{
				mini = j;
			}
		}
		swap(vek[i], vek[mini]);
	}
}

void sortowanie::quickS(int left, int right)
{
	int i = (left + right) / 2;
	int piwot = vek[i];
	vek[i] = vek[right];
	int j = left;
	for (i = left; i < right; i++)
	{
		if (vek[i] < piwot)
		{
			swap(vek[i], vek[j]);
			j++;
		}
	}
	vek[right] = vek[j];
	vek[j] = piwot;

	if (left < j - 1)
	{
		quickS(left, j - 1);
	}
	if (j + 1 < right);
	{
		quickS(j + 1, right);
	}
}

void sortowanie::wyswietl()
{
	for (int i = 0; i < 100; i++)
	{
		cout << vek[i] << "	";
	}
}