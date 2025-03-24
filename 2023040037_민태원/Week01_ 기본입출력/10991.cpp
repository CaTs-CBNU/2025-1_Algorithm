#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, Ki;
    cin >> T;
    for (int i = 0; i < T; i++){
        Ki = T-i-1;
        for (int k = 0; k < Ki; k++) cout << " "; 
        for (int k = 0; k <= i; k++){
            cout << "*";
            if (k != i) cout << " "; 
        }
        cout << "\n";
    }
}