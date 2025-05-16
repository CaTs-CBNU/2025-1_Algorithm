#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	int n;
	cin >> n;

	queue<int> q;

	while (n--) {
		string s;
		int num;
		cin >> s;
		if (s == "push") {
			cin >> num;
			q.push(num);
		}
		if (s == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (s == "size") {
			cout << q.size() << endl;
		}
		if (s == "empty") {
			cout << (q.empty() ? 1 : 0) << endl;
		}
		if (s == "front") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}
		if (s == "back") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}

	}
}