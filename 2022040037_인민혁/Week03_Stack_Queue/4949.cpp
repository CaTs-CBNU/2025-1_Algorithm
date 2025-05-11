#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        string sentence;
        getline(cin, sentence);
        if (sentence == ".") break;
        stack<char> s;
        bool isValid = true;
        for (char c : sentence) {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) isValid = false;
        if (isValid) cout << "yes\n";
        else cout << "no\n";
    }
}