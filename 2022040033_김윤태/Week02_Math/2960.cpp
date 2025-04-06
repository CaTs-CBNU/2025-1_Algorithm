#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[1001] = { 0 };
    int N, K, num;
    int count = 0;
    cin >> N >> K;

    for (int i = 2; i <= N; i++) {
        if (arr[i] == 0)
            for (int j = i; j <= N; j += i) {
                if (arr[j] == 0) {
                    arr[j] = 1;
                    count++;
                    if (K == count) {
                        cout << j;
                        return 0;
                    }
                }
            }
    }
}