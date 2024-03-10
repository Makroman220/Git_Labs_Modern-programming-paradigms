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
}//Нижче код для виведення ромба/*#include <iostream>
using namespace std;
int main()
{
//Для зберігання числа
int n;
//Для користувача (щоб розумів що робити)
cout << "Enter Number (*2): ";
//Ввід розміру
cin >> n;
//Якщо число більше ніж 6, то не буде виконано, бо ромб тоді вже не
пропорційний)
if (n < 6)
{
//Для верхньої частини ромба
for (int i = 0; i < n; i++)
{
//Пробіл йде на спад, (бо число яке вказує на кількість
зменшується)
for (int j = 0; j < n - i; j++)
{
cout << " ";
}
//Кількість зірок збільшується, до поки j не буде <= i
for (int j = 0; j <= i; j++)
{
cout << "*";
}
//Відповідає за цифри (оскільки і збільшується то й число
теж)
for (int j = 0; j < i; ++j)
{
cout << i;
}
cout << endl;
}
//Для нижньої частини ромба
for (int i = 0; i < n; i++)
{
//Пробіли йдуть на збільшення
for (int j = 0; j < 1 + i; j++)
{
cout << " ";
}
//Кількість зірок зменшується (поки число більше за 0)
for (int j = n; j > i; j--)
{
cout << "*";
}
//Цифри (їх кількість зменшується)
for (int j = n - 1; j > i; --j)
{
//Для того, щоб цифри продовжувались (22, 333, 4444 і
т.д.)
int NumbersCont = i + n;
cout << NumbersCont;
}
cout << endl;
}
}
// Якщо число більше як п'ять (виводить "Число надто велике")
else
{
cout << "The number is too large";
}
cout << endl;
}*/