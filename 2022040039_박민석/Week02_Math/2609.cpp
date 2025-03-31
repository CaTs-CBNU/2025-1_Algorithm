#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    int c_mul;
    cin >> a >> b;
    c_mul=a*b;
    while(b!=0)
    {
        int temp = b;
        b=a%b;
        a = temp;
    }
    cout << a << "\n";
    cout << c_mul/a;
    
}