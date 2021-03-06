/* Дана таблица размера MxN, заполненная числами. Напишите программу, находящую путь с наибольшей суммой из верхней левой клетки в правую нижнюю, использующий только ход вправо и вниз на одну клетку. В ответе нужно выписать
сумму значений из клеток на этом пути. */

#include <iostream>

using namespace std;

int rise_against(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}

int main()
{
	int M, N;
	cin >> N >> M;
	int** F;
	F = new int* [N];
	for (int i = 0; i < M; i++)
	{
		F[i] = new int[M];
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> F[j][i];
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0)
			{
				if (j != 0)
					F[j][i] += F[j - 1][i];
			}
			else
			{
				if (j == 0)
					F[j][i] += F[j][i - 1];
				else
					F[j][i] += rise_against(F[j - 1][i], F[j][i - 1]);
			}
		}
	}
	cout << F[N - 1][M - 1];
	for (int i = 0; i < N; i++)
	{
		delete[] F[i];
	}
	delete[] F;
	return 0;
}