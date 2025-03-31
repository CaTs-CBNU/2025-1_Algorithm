#include <iostream>
using namespace std;

int main()
{
    long long num;
    int count=0;
    cin >> num;
    int c_num = num;
    for(int i=2;i*i<=num;i++)
    {
        while(c_num%i==0)
        {
            c_num=c_num/i;
            cout << i << "\n";
        }
        
    }
}