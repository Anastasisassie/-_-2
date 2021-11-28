#include<iostream>
using namespace std;
int main()
{
    int n;
    int k = 0, i, j;
    cout << "n = "; cin >> n;
    for (i = 0; i * i * i <= n - 1; i++)
        for (j = i; j * j * j <= n - 1; j++)
            if (i* i* i + j * j * j == n)
                k++;
    cout << " sposob(ov) " << k;
    return 0;
}
//—оставить алгоритм, определ€ющий количество способов, какими задуманное 
//число n > 1 можно представить в виде суммы n = i3 + j3,счита€, что
//перестановка слагаемых нового способа не даЄт.
