#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� a � b: ";
	int a, b, n;
	cin >> a >> b;
	if (a > 2 && b > 2)
	{
		if (a % 2 == 0 || b % 2 == 0)
		{
			cout << "����� �� �������" << endl;
		}
		else
		{
			cout << "����� �������" << endl;
		}
	}
	cout << "���: " << b;
}