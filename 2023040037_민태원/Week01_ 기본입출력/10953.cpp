#include <iostream>
using namespace std;
int main () {
    int T, a, b;
    cin >> T;
    string str;
    for (int i = 0; i < T; i++){
        cin >> str;
        cout << str[0] + str[2] - '0' * 2 << "\n";
    }
}