#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите числа a и b: ";
	int a, b, n;
	cin >> a >> b;
	if (a > 2 && b > 2)
	{
		if (a % 2 == 0 || b % 2 == 0)
		{
			cout << "Числа не простые" << endl;
		}
		else
		{
			cout << "Числа простые" << endl;
		}
	}
	cout << "НОД: " << b;
}