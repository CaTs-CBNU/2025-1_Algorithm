#include<iostream>
#include<queue>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1;i <= n;i++) {
		q.push(i);
	}

	while (true) {
		if (q.size() == 1) {
			cout << q.front();
			break;
		}
		q.pop();
		q.push(q.front());
		q.pop();
	}


}