#include <iostream>
using namespace std;
int main () {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int N;
    cin >> N;
    int k, min, max;
    cin >> k;
    min = k;
    max = min;
    for (int i = 1; i < N; i++){
        cin >> k;
        if (k < min) min = k;
        else if (k > max) max = k;
    }
    cout << min << " " << max;
}