#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	char word[100];
	int cnt = 0;
	cin >> word;
	for (int i = 0; i < strlen(word); i++) {
		cout << word[i];
		cnt++;
		if (cnt % 10 == 0) {
			cout << endl;
		}
	}
}