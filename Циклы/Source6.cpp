#include <iostream>
using namespace std;
int main()
{
    double month = 0, R = 0, M = 0;
    cout << "Enter R: "; cin >> R;
    cout << "Enter M: "; cin >> M;
    for (month = 0; R < M; ++month)
    {
        R += R * 0.04 / 12;
    }
    cout << month;
    return 0;
}
//����� R ���. �������� � ���� ��� 4% ������� (������� ������������������). 
//��������� ��������, ������������ ����� ����� ���������� ������� �����
//��������� M ���. (M > R).