#include<iostream>
#include<stack>
using namespace std;


void hanoi(int count,int from,int to) {
	if (count == 1) {
		cout << from << " " << to << '\n';
	}
	else {
		hanoi(count - 1, from, 6 - from - to);
		cout << from << " " << to << '\n';
		hanoi(count - 1, 6 - from - to, to);
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	int t = 1;
	for (int i = 0;i < n;i++) {
		t *= 2;
	}
	cout << t - 1 << '\n';

	hanoi(n, 1, 3);


}