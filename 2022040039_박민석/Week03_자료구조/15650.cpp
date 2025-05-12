#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, r;
    cin >> n >> r;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    vector<int> temp(n,1);
    for(int i=0;i<r;i++)
    {
        temp[i] = 0;
    }
    do
    {
        for(int i=0;i<n;i++)
        {
            if(temp[i]==0)
            {
                cout << v[i] << ' ';
            }
        }
        cout << "\n";
    } while (next_permutation(temp.begin(),temp.end()));
    
}

// 알고리즘 안쓰는걸로 한 번더 만들어보기기