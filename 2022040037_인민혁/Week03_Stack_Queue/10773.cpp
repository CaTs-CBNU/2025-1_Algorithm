#include <iostream>

using namespace std;

class Money {
    int top;
    int size;
    int sum;
    int* arr;
    void resize() {
        int newSize = size * 2;
        int* newArr = new int[newSize];
        for (int i = 0; i < top; i++)
            newArr[i] = arr[i];
        delete[]arr;
        arr = newArr;
        size = newSize;
    }
public:
    Money() {
        top = 0;
        size = 2;
        sum = 0;
        arr = new int[size];
    }
    void income(int n) {
        if (top == size)
            resize();
        arr[top++] = n;
        sum += n;
    }
    void error() {
        if (top != 0)
            sum -= arr[--top];
    }
    int getSum() {
        return sum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;
    Money M;
    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        if (num > 0)
            M.income(num);
        else if (num == 0)
            M.error();
    }
    cout << M.getSum() << '\n';
}