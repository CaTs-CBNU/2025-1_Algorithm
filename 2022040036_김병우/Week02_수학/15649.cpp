#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n, r;
    cin >> n >> r;
    for(int i = 1; i<=n;i++)
    {
        v.push_back(i);
    }
    do
    {
        for(int i=0;i<r;i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        reverse(v.begin()+r, v.end());
    } while (next_permutation(v.begin(),v.end()));
    
}

// 알고리즘 안쓰는걸로 한 번더 만들어보기기