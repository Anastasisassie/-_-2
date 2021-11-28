#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c;
    int f1 = 0;
    int f2 = 1;
    int sum = 0;

    cout << "Введите a, b:" << endl;
    cin >> a >> b;
    while (f2 < a)
    {
        c = f1 + f2;
        f1 = f2;
        f2 = c;
    }
    while (f2 < b)
    {
        sum = sum + f2;
        c = f1 + f2;
        f1 = f2;
        f2 = c;
    }
    cout << "summ=" << sum << endl;
    _getch();
    return 0;
}
//Найти сумму чисел Фибоначчи на [a,b].