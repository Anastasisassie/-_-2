#include <iostream> 
using namespace std;
void main()
{
    double c1, c2;
    int i = 1;
    cout << "enter: ";
    cin >> c1 >> c2;
    while (i <= 6)
    {
        c1 = c1 / 2;
        c2 = c2 + c1;
        c2 = c2 / 2;
        c1 = c1+ c2;
        i++;
    }
    cout << c1 << " " << c2;
}
// ������� ��� ������. � ������ ������ ��������� C1 ������ ����, �� ������ - C2 
// ������ ����.�� ������� ������ ���������� �������� ���� �� ������ �����,
// ����� �� ������� ���������� �������� � ������ �����, � ��� �����.������� ����
// �������� � ����� ������� ����� 12 �����������.

