#include<iostream>
using namespace std;
int main(void) {
	int n;

	cin >> n;

	int i = 2;
	while (n != 1) {
		if (n % i == 0) {
			cout << i << endl;
			n /= i;
			i = 2;
		}
		else
			i++;
	}
}