#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string paren;
        cin >> paren;
        int cnt = 0;
        bool isVPS = true;
        for (char c : paren) {
            if (c == '(')
                cnt++;
            else if (c == ')') {
                cnt--;
                if (cnt < 0) {
                    isVPS = false;
                    break;
                }
            }
        }
        if (isVPS && cnt == 0)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
}