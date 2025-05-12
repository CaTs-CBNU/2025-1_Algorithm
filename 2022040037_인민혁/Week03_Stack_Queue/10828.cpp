#include <iostream>

using namespace std;

class Stack {
    int tp;
    int capacity;
    int* arr;
    void resize() {
        int newCap = capacity * 2;
        int* newArr = new int[newCap];
        for (int i = 0; i < tp; i++)
            newArr[i] = arr[i];
        delete[]arr;
        arr = newArr;
        capacity = newCap;
    }
public:
    Stack() {
        tp = 0;
        capacity = 2;
        arr = new int[capacity];
    }
    ~Stack() { delete[]arr; }
    void push(int n) {
        if (tp == capacity - 1)
            resize();
        arr[tp++] = n;
    }
    int pop() {
        if (tp != 0) return arr[--tp];
        else return -1;
    }
    int size() { return tp; }
    int empty() {
        if (tp == 0) return 1;
        else return 0;
    }
    int top() {
        if (tp == 0) return -1;
        else return arr[tp - 1];
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
            cout << S.pop() << '\n';
        else if (command == "size")
            cout << S.size() << '\n';
        else if (command == "empty")
            cout << S.empty() << '\n';
        else if (command == "top")
            cout << S.top() << '\n';
    }
}