#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string input;
    string fnd;
    cin >> input >> fnd;
    stack<char> arr;
    for (char c : input) {
        arr.push(c);
        if (c == fnd[fnd.length() - 1]) {
            string tmp;
            for (int i = 0; i < (int)fnd.length(); i++) {
                if (!arr.empty()) {
                    tmp += arr.top();
                    arr.pop();
                }
            }
            reverse(tmp.begin(), tmp.end());
            if (tmp == fnd)
                continue;
            else
                for (char tmpC : tmp)
                    arr.push(tmpC);
        }
    }
    if (arr.size() == 0) cout << "FRULA\n";
    else {
        string tmp;
        while (!arr.empty()) {
            tmp += arr.top();
            arr.pop();
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << '\n';
    }
}