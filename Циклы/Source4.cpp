#include<iostream>
using namespace std;
int main()
{
    int N;
    int summa = 0;
    int fact = 1;
    cout << "Enter n: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        fact = fact * i;
        summa = summa + fact;
    }
    cout << "summa = " << summa << endl;
    return 0;
}
//Вычислить сумму S = 1! + 2! + 3! + … + n!  (1 <= n <= 10)
