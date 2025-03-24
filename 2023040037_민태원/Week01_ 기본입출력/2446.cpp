#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, Ki, oddKi;
    cin >> T;
    int i = 0;
    bool reverse = true;
    if (T == 1) reverse = false;
    while (i >= 0){
        Ki = T-i-1;
        oddKi = 2*Ki + 1;
        for (int k = 0; k < i; k++) cout << " ";
        for (int k = 0; k < oddKi; k++) cout << "*";
        cout << "\n";
        if (reverse) i++;
        else i--;
        if (i >= T-1) reverse = false;
    }
}