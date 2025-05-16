#include<iostream>
#include<queue>
using namespace std;

int main(void) {
	
	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 1;i <= n;i++) {
		q.push(i);
	}
	cout << "<";
	while (true) {
		for (int i = 1;i < m;i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
		else {
			break;
		}
	}
	cout << ">";

}