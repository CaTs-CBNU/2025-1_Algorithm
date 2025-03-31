#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size;
    int count = 0;
    cin >> size;
    if(size>100) return 0;
    int *nArray = new int [size];
    for(int i=0;i<size;i++)
    {
        cin >> nArray[i];
    }
    for(int i=0;i<size;i++)
    {
        if(nArray[i]<2) continue;

        bool isPrime = true;
        for(int j=2;j*j<=nArray[i];j++)
        {
            if(nArray[i]%j==0)
            {
                isPrime = false;
                break;
            }
            
        }
        if(isPrime) count++;
    }
    cout << count;
}