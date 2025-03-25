#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1 - i; j >= 1; j--) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		if (i != n - 1) {
			cout << "\n";
		}
	}
}
