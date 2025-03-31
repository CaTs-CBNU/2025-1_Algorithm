#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a, b;
    cin >> a >> b;
    long long int c_mul = a*b;
    while(b!=0)
    {
        long long int temp = b;
        b=a%b;
        a=temp;
    }
    cout << c_mul/a;
}