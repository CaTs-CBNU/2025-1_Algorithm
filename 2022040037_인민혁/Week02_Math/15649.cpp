#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r;
    cin >> n >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr.at(i) = i + 1;
    do {
        for (int i = 0; i < r; i++) {
            cout << arr.at(i) << ' ';
        }
        cout << '\n';
        reverse(arr.begin() + r, arr.end());
    } while (next_permutation(arr.begin(), arr.end()));
}