#include<iostream>
#include<string>
using namespace std;
int main(void) {
	while (true) {
		string s;
		if (!getline(cin, s))
			break;

		cout << s << "\n";
	}
}