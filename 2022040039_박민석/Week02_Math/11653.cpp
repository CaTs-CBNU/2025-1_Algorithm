#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    int i=2;
    cin >> num;
    while(num!=1)
    {
        if(num%i==0)
        {
            num/=i;
            cout << i << "\n";
        }
        else i++;
    }
}