#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, Ki, oddi;
    cin >> T;
    int oddKi = (T-1)*2 +1;
    for (int i = 0; i < T-1; i++){
        Ki = T-i-1;
        oddi = 2*i - 1;
        for (int k = 0; k < Ki; k++) cout << " "; 
        cout << "*";
        for (int k = 0; k < oddi; k++) cout << " "; 
        if (i != 0) cout << "*";
        cout << "\n";
    }
    for (int k = 0; k < oddKi; k++) cout << "*";
}