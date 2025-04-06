#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    do {
        for (int num : v)
            cout << num << " ";
        cout << "\n";
    } while (next_permutation(v.begin(), v.end()));

}