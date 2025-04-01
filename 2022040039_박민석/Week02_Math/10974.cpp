#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    do
    {
        for(int num : v)
            cout << num << " ";
        cout << "\n";
    } while (next_permutation(v.begin(),v.end()));
    
    
    
}