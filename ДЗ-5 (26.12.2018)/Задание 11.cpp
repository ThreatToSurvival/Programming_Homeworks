//Напишите программу, находящую в массиве такой элемент, что равные ему составляют в массиве - большинство. Если такого элемента нет - выведите “NO”

#include <iostream>

using namespace std;

int main()
{
	int l, x, y = 0, z = 1;
	cin >> l;
	int* F = new int[l];
	int* B = new int[l];
	bool* D = new bool[l];
	for (int i = 0; i < l; i++)
	{
		cin >> F[i];
		D[i] = 1;
		B[i] = 0;
	}
	for (int j = 0; j < l; j++)
	{
		if (D[j] != 0)
		{
			B[j]++;
			for (int o = j + 1; o <= l; o++)
			{
				if(D[o] != 0)
				if (F[j] == F[o])
				{
				    D[o] = 0;
					B[j]++;
				}
			}
		}
	}
	for (int i = 0; i < l; i++)
	{
		if (D[i] != 0)
		{
			if (y < B[i])
			{
				y = B[i];
				x = F[i];
			}
		}
		if (D[i] == 0)
			z++;
	}
	if (z == l)
		cout << "NO";
	else
		cout << x;
	return 0;
}