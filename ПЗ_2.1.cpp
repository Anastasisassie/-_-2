#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");
    int A, B, S, P;
    cout << "Длина: ";
    cin >> A;
    cout << "Ширина: ";
    cin >> B; 
    S = A * B;
    P = 2 * (A + B);
    cout << "Площадь прямоугольника: " << S << endl;
    cout << "Периметр прямоугольника: " << P << endl;
    {
            for (int i = 0; i < B; i++)
            {
                for (int j = 0; j < A; j++)
                {
                    cout << '_';
                }
                cout << endl;
            }
            system("pause");
            return 0;
    }
}