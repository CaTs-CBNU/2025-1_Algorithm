#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++){
        for (int k = 0; k <= i; k++)cout << "*";
        cout << "\n";
    }
}