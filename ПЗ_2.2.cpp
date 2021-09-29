#include<iostream>
#include<conio.h>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int e = 0;
	int q = 1, w = 0, k;
	int n, j;
	int fact = 1;
	do
	{
		cout << "Введите первые n-чисел Фибоначчи: ";
		cout << "n=";
		cin >> n;
		cout << e << "|";
		for (int i = 1; i < n; i++)
		{
			k = q + w;
			q = w;
			w = k;
			cout << k << "|";
		}
		for (int j = n; n > 0; n--)
		{
			fact *= n;
		}
		cout << endl;
		cout << "Факториал: " << fact;
		break;
	} while (fact != 'n');
	return 0;
}
	