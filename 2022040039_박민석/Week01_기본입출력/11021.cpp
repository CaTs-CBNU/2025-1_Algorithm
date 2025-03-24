#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int a, b;
	int result[100];
	cin >> T;
	cin.ignore();


	for (int i = 0; i < T; i++)
	{
		string input;
		getline(cin, input);
		int space = input.find(' ');
		a = stoi(input.substr(0, space));
		b = stoi(input.substr(space + 1));
		result[i] = a + b;
	}

	for (int i = 0; i < T; i++)
	{
		cout << "Case #" << i+1 << ": " << result[i] << "\n";
	}
}