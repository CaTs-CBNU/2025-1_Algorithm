#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int N;
    int K;
    int count = 0;
    cin >> N >> K;
    bool *is_prime = new bool [N+1];

    for(int i=0;i<=N;i++)
    {
        is_prime[i]=true;
    }
    is_prime[1]=false;
    for(int i=2;i<=N;i++)
    {
        if(is_prime[i])
        {
            count++;
            if(count == K)
            {
                cout << i;
                return 0;
            }
            for(int j=i*i;j<=N;j += i)
            {
                if(is_prime[j])
                {
                    is_prime[j]=false;
                    count++;
                }
                if(count==K)
                {
                    cout << j;
                    return 0;
                }
            }
        }
    }
}
