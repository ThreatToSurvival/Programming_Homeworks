/* � ����������� ������ ���� ��� �������:
1. ������ �� 5,
2. ������ �� 15,
3. ������ �� 6.
�������� ���������, ������� �������, ������� ��������� ����� ����� ��������
����������� �� ����� X �����������, ���������� �� ����� �� N ������. ������
������� �����������, ������ ���� �� �������� ����� ������� 15 (� ���������
������ ��������� ����������� ��������). */

#include <iostream>

using namespace std;

int main()
{
	int X, N, temp = 1;
	cin >> X >> N;
	for (int i = 1; i <= N; i++)
	{
		temp *= i;
	}
	temp *= temp;
	temp -= 15 * 15;
	cout << temp;
}