#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Char;
	cin >> Char;
	for (int i = 0; i < Char.length(); i++)
	{
		cout << Char[i];
		if ((i+1) % 10 == 0)
		{
			cout << "\n";
		}
	}
}