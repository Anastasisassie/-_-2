#include <iostream>
using namespace std;
int main() 
{
    double n=0, sum=0;
   
    do {
        n++;
        sum = sum + 1 / n;
    }
 while (sum <= 5);
    cout << "Value is " << n;
}
//Сколько слагаемых должно быть в сумме 1+1/2+1/3+1/4+...+1/n, чтобы эта сумма 
//оказалась больше 5 ?