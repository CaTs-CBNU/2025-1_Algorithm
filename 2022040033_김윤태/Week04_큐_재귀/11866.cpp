#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	while (q.empty() != true) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (q.empty() != true)
			cout << ", ";
	}
	cout << ">";
}
