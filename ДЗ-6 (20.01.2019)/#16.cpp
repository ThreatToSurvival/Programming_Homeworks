/* � ���������� ����������� ���������� �������������� ����������� �� ��������
��������������� ���� �����. �� ������ ����� ������ ������ � �����������
��������� ������������� ����� ����� � ������� ��������� ������� ������
2015�. ���������� ������������ ����� � ����� �������� � ��������� N. ���
����� �� ��������� 1000. ��������, � ������� �������� ���������� ��������,
����� ����������.
���������� ��������� ����� - �������� ����� ��������� ������� �
������������ ������ ������������ ���� ���������, ����� ��������� ��������
������� ������ �� ����� 6 �����. ���� �������� ����� ������������ �� ������,
����� ��������� ������ �1. ��������� ������ ���� ����������� �� ������� �
������. */

#include <iostream>

using namespace std;

int main()
{
	int N, x, c = 0;
	cin >> N;
	int F[N];
	for (int i = 1; i <= N; i++)
	{
		cin >> F[i];
		if (F[i] > 1000)
		{
			break;
			cout << "All numbers mustn't exceed 1000";
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 8; j <= N; j++)
		{
			if (F[j] - F[i] >= 6)
			{
				if (((F[i] * F[j - 1]) % 2 == 0) && ((F[i] * F[j]) % 2 == 0))
				{
					if ((F[i] * F[j - 1]) > (F[i] * F[j]))
					{
						x = F[i] * F[j - 1];
						c++;
					}
					else
					{
						x = F[i] * F[j];
						c++;
					}
				}
				else
				{
					if (((F[i] * F[j - 1]) % 2 != 0) && ((F[i] * F[j]) % 2 == 0))
					{
						x = F[i] * F[j - 1];
						c++;
					}
					else
					{
						x = F[i] * F[j];
						c++;
					}
				}
			}
		}
	}
	if (c != 0)
		cout << x;
	else
		cout << "-1";
	return 0;
}