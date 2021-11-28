#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	int sum;
	cout << "enter n "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (sum = 0, j = 2; j <= n; j++)
			if (i % j == 0) 
				sum++;
		if (sum == 1)
				cout << i << endl;
	}
	system("pause");
	return 0;
}
// Найти все простые числа <= N