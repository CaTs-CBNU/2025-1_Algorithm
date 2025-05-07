#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int size;
    int array_size=0;
    int *nArray;
    cin >> size;
    for(int i=0;i<size;i++)
    { 
        long long num = 0;
        cin>>array_size;
        nArray=new int [array_size];
        for(int j=0;j<array_size;j++)
        {
            cin >> nArray[j];
        }
        for(int j=0;j<array_size;j++)
        {
            for(int n=j+1;n<array_size;n++)
            {
                num+=gcd(nArray[j],nArray[n]);
            }
        }
        cout << num << "\n";
        delete [] nArray;
    }
}