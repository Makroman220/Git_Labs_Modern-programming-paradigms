#include <iostream>
using namespace std;
// Звичайна функція для обчислення n!!
int doubleFactorial(int n)
{
	int result = 1;
	// Цикл для обчислення n!! з кроком 2 для непарних n та з
	кроком 1 для парних n
		for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2)
		{
			result *= i; // Обчислення добутку n!!
		}
	// Якщо n парне, результат множиться на -1
	if (n % 2 == 0)
	{
		result *= -1;
	}
	return result; // Повернення результату n!!
}
// Шаблонна функція для обчислення (-1)^{n+1} * n!!
template <typename T>
T doubleFactorial(T n)
{
	T result = 1;
	// Цикл для обчислення n!! з кроком 2 для непарних n та з
	кроком 1 для парних n
		for (T i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2)
		{
			result *= i; // Обчислення добутку n!!
		}
	// Якщо n парне, результат множиться на -1
	if (n % 2 == 0)
	{
		result *= -1;
	}
	return result; // Повернення результату (-1)^{n+1} * n!!
}
int main()
{
	int n;
	cout << "Enter a positive integer n: ";
	cin >> n;
	// Виведення результату для n!! з використанням звичайної
	функції
		cout << "n!! of an ordinary function: " << doubleFactorial(n)
		<< endl;
	// Виведення результату для (-1)^{n+1} * n!! з використанням
	шаблонної функції
		cout << "(-1)^{n+1} * n!!: " << doubleFactorial<int>(n) <<
		endl;
	return 0;
}
