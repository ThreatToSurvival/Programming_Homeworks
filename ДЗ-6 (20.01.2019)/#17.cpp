/* �� ������ ����� ���������� ������������������ ������������� ����� �����
X1,X2 , � ��� ����� �� ��������� 1000, �� ���������� ������� ����������.
������ ����� ���������� � ���� ��������� ��������� ������, ����������
���������� ������ �����. ��������� ����� ������������ ������������������
�������� ����� 0. ������� ������������������ �� �������� XT �� �������� XT+N
���������� ��������, ���� �� ���� ������� ������ ��������� ����� ������
�����������. ������� ������� ���������� �������� XT+N-XT. ��������
����������� ���������, ������� ��������� ���������� ������ ����� ����
�������� ������������������. ���� � ������������������ ��� �� ������
�������, ��������� ������ 0. ��������� ������ ���������� ����� ��
��������� �����:
� numbers have received
Highest lift height is � */

#include <iostream>

using namespace std;

int main()
{
	int U, temp = 0, H = 0, N = 1;
	double F[U];
	for (int i = 0; F[i] != 0; i++)
	{
		cin >> F[i];
		if (F[i] > 1000)
		{
			break;
			cout << "The numbers can't exceed 1000";
		}
	}
	for (int i = 0; i + N <= U; i++)
	{
		for (N = 1; i + N <= U; N++)
		{
			for (int o = i; o <= i + N; o++)
			{
				if (F[o + 1] > F[o])
					temp++;
				else
				{
					if (temp > H)
					{
						H = temp;
						temp = 0;
					}
					o = i + N + 1;
				}
			}
		}
	}
	cout << U << " numbers have been received" << endl;
	cout << "Biggest lift height is " << H;
	return 0;
}