#include<iostream>
#include<string>
using namespace std;
int main(void) {
	while (true) {
		string s;
		getline(cin, s);
		if (s.length() == 0)
			break;
		cout << s << "\n";
	}
}