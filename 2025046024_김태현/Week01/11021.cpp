#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}