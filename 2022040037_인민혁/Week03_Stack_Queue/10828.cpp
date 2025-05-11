#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
    int ind;
    vector<int> arr;
public:
    Stack() {
        ind = 0;
        arr.resize(ind);
    }
    void push(int n) {
        arr.resize(ind + 1);
        arr[ind++] = n;
    }
    void pop() {
        if (ind <= 0) cout << -1 << '\n';
        else {
            cout << arr[--ind] << '\n';
            arr.resize(ind);
        }
    }
    void size() {
        cout << ind << '\n';
    }
    void empty() {
        if (ind <= 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    void top() {
        if (ind <= 0) cout << -1 << '\n';
        else cout << arr[ind - 1] << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    Stack S;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int num;
            cin >> num;
            S.push(num);
        }
        else if (command == "pop")
            S.pop();
        else if (command == "size")
            S.size();
        else if (command == "empty")
            S.empty();
        else if (command == "top")
            S.top();
    }
}