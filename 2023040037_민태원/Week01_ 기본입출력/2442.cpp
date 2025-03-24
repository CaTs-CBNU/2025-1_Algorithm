#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, Ki, oddi;
    cin >> T;
    for (int i = 0; i < T; i++){
        Ki = T-i-1;
        oddi = 2*i + 1;
        for (int k = 0; k < Ki; k++) cout << " ";
        for (int k = 0; k < oddi; k++) cout << "*";
        cout << "\n";
    }
}