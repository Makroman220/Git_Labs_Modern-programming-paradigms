#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter Number : ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i; ++j)
		{
			cout << i;
		}
		cout << endl;
	}
	return 0;
}//����� ��� ��� ��������� �����/*#include <iostream>
using namespace std;
int main()
{
//��� ��������� �����
int n;
//��� ����������� (��� ������ �� ������)
cout << "Enter Number (*2): ";
//��� ������
cin >> n;
//���� ����� ����� �� 6, �� �� ���� ��������, �� ���� ��� ��� ��
������������)
if (n < 6)
{
//��� ������� ������� �����
for (int i = 0; i < n; i++)
{
//����� ��� �� ����, (�� ����� ��� ����� �� �������
����������)
for (int j = 0; j < n - i; j++)
{
cout << " ";
}
//ʳ������ ���� ����������, �� ���� j �� ���� <= i
for (int j = 0; j <= i; j++)
{
cout << "*";
}
//³������ �� ����� (������� � ���������� �� � �����
���)
for (int j = 0; j < i; ++j)
{
cout << i;
}
cout << endl;
}
//��� ������ ������� �����
for (int i = 0; i < n; i++)
{
//������ ����� �� ���������
for (int j = 0; j < 1 + i; j++)
{
cout << " ";
}
//ʳ������ ���� ���������� (���� ����� ����� �� 0)
for (int j = n; j > i; j--)
{
cout << "*";
}
//����� (�� ������� ����������)
for (int j = n - 1; j > i; --j)
{
//��� ����, ��� ����� �������������� (22, 333, 4444 �
�.�.)
int NumbersCont = i + n;
cout << NumbersCont;
}
cout << endl;
}
}
// ���� ����� ����� �� �'��� (�������� "����� ����� ������")
else
{
cout << "The number is too large";
}
cout << endl;
}*/