#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, a, b;
    int arr[1000001];
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        arr[i] = a + b;
    }
    for (int i = 0; i < T; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}