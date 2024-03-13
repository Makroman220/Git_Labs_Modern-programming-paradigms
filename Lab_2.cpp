#include <iostream>
using namespace std;
// �������� ������� ��� ���������� n!!
int doubleFactorial(int n)
{
	int result = 1;
	// ���� ��� ���������� n!! � ������ 2 ��� �������� n �� �
	������ 1 ��� ������ n
		for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2)
		{
			result *= i; // ���������� ������� n!!
		}
	// ���� n �����, ��������� ��������� �� -1
	if (n % 2 == 0)
	{
		result *= -1;
	}
	return result; // ���������� ���������� n!!
}
// �������� ������� ��� ���������� (-1)^{n+1} * n!!
template <typename T>
T doubleFactorial(T n)
{
	T result = 1;
	// ���� ��� ���������� n!! � ������ 2 ��� �������� n �� �
	������ 1 ��� ������ n
		for (T i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2)
		{
			result *= i; // ���������� ������� n!!
		}
	// ���� n �����, ��������� ��������� �� -1
	if (n % 2 == 0)
	{
		result *= -1;
	}
	return result; // ���������� ���������� (-1)^{n+1} * n!!
}
int main()
{
	int n;
	cout << "Enter a positive integer n: ";
	cin >> n;
	// ��������� ���������� ��� n!! � ������������� ��������
	�������
		cout << "n!! of an ordinary function: " << doubleFactorial(n)
		<< endl;
	// ��������� ���������� ��� (-1)^{n+1} * n!! � �������������
	�������� �������
		cout << "(-1)^{n+1} * n!!: " << doubleFactorial<int>(n) <<
		endl;
	return 0;
}
