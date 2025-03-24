#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int T, Ki, evenKi;
    cin >> T;
    int i = 0;
    bool reverse = true;
    if (T == 1) reverse = false;
    while (i >= 0){
        Ki = T-i-1;
        evenKi = 2*Ki;
        for (int k = 0; k <= i; k++) cout << "*";
        for (int k = 0; k < evenKi; k++) cout << " ";
        for (int k = 0; k <= i; k++) cout << "*";
        cout << "\n";
        if (reverse) i++;
        else i--;
        if (i >= T-1) reverse = false;
    }
}