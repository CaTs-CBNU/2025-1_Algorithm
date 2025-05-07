#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	int n;
	cin >> n;

	stack<int> stk;

	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		if (num != 0) {
			stk.push(num);
		}
		else {
			stk.pop();
		}
	}


	int sum = 0;
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}


	cout << sum;

}

