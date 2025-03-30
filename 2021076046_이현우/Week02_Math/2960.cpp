#include <iostream>
#include <vector>
using namespace std;

int n, k;
int cnt = 0;
void Eratos(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {  
            cnt++;
            if (cnt == k) {
                cout << i; 
                return;
            }
     
            for (int j = i * i; j <= n; j += i) {
                if (is_prime[j]) {
                    is_prime[j] = false;
                    cnt++;
                    if (cnt == k) {
                        cout << j; 
                        return;
                    }
                }
            }
        }
    }
}
int main() {
    cin >> n >> k;
    Eratos(n);
    return 0;
}

