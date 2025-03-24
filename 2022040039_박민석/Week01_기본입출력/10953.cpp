#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int a, b;
	int c1[100];
	cin >> T;
	cin.ignore();
	
	for (int i = 0; i < T; i++)
	{
		string input;
		getline(cin, input);

		int comma = input.find(',');
		a = stoi(input.substr(0, comma));
		b = stoi(input.substr(comma + 1));

		c1[i] = a + b;
	}

	for (int i = 0; i < T; i++)
	{
		cout << c1[i]<<"\n";
	}

}