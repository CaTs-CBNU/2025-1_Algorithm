#include <iostream>
using namespace std;


int GCD(int a, int b) {
    int remain = a % b;
    if (remain == 0) {
        return b;
    }
    else {
        return GCD(b, remain);
    }
}
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << "\n" << LCM(a, b);
    return 0;
}

