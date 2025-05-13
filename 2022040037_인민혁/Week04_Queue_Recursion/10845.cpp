#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue {
	T* mem;
	int rear, front;
	int size;
	void resize() {
		int newSize = size * 2;
		T* newMem = new T[newSize];
		for (int i = 0; i < size; i++) {
			newMem[i] = mem[i];
		}
		delete[]mem;
		mem = newMem;
		size = newSize;
	}
public:
	Queue() {
		rear = 0;
		front = 0;
		size = 2;
		mem = new T[size];
	}
	void push(T n) {
		if (rear == size) resize();
		mem[rear++] = n;
	}
	T pop() {
		if (front >= rear) return -1;
		return mem[front++];
	}
	int sizer() {
		return (rear - front);
	}
	int empty() {
		if (front >= rear) return 1;
		else return 0;
	}
	int fronter() {
		if (front >= rear) return -1;
		else return mem[front];
	}
	int back() {
		if (front >= rear) return -1;
		return mem[rear - 1];
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	Queue<int> Q;

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int n;
			cin >> n;
			Q.push(n);
		}
		else if (cmd == "pop") {
			cout << Q.pop() << '\n';
		}
		else if (cmd == "size") {
			cout << Q.sizer() << '\n';
		}
		else if (cmd == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (cmd == "front") {
			cout << Q.fronter() << '\n';
		}
		else if (cmd == "back") {
			cout << Q.back() << '\n';
		}
	}
}