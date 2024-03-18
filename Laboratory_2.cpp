#include <iostream>
using namespace std;

// Normal function for calculating n!!
int doubleFactorial(int n) 
{
	int result = 1;
	// Loop for calculating n!! with step 2 for odd n and step 1 for even n
	for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2) 
	{
		result *= i; // Calculating the product of n!!
	}
	// If n is even, the result is multiplied by -1
	if (n % 2 == 0) 
	{
		result *= -1;
	}
	return result; // Returning the result of n!!
}

// Template function for calculating (-1)^{n+1} * n!!
template <typename T>
T doubleFactorial(T n) 
{
	T result = 1;
	// Loop for calculating n!! with step 2 for odd n and step 1 for even n
	for (T i = (n % 2 == 0 ? 2 : 1); i <= n; i += 2) 
	{
		result *= i; // Calculating the product of n!!
	}
	// If n is even, the result is multiplied by -1
	if (n % 2 == 0) 
	{
		result *= -1;
	}
	return result; // Returning the result of (-1)^{n+1} * n!!
}

int main() 
{
	int n;
	cout << "Enter a positive integer n: ";
	cin >> n;
	// Printing the result for n!! using the normal function
	cout << "n!! of an ordinary function: " << doubleFactorial(n) << endl;
	// Printing the result for (-1)^{n+1} * n!! using the template function
	cout << "(-1)^{n+1} * n!!: " << doubleFactorial<int>(n) << endl;
	return 0;
}
