#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int a, b;
		char c;
		cin >> a >> c >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << endl;
	}
}