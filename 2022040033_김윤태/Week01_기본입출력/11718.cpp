#include <iostream>
#include <string>

using namespace std;;

int main() {
	char word[101];
	while (cin.getline(word, 101)) {
		cout << word << "\n";
	}
}