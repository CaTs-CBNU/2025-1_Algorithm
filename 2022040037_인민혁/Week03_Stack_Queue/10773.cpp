#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Money {
    int ind;
    int sum;
    vector<int> arr;
public:
    Money() {
        ind = 0;
        sum = 0;
        arr.resize(ind);
    }
    void income(int n) {
        arr.resize(ind + 1);
        arr[ind++] = n;
        sum += n;
    }
    void error() {
        sum -= arr[--ind];
        arr.resize(ind);
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