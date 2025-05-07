#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	char str[101];

	cin >> str;

	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0')
			break;
		cout << str[i];
		if ((i + 1) % 10 == 0)
			cout << '\n';

	}

	return 0;
}