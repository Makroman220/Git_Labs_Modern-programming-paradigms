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
}
