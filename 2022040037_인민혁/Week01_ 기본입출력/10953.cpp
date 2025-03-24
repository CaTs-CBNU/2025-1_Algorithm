#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	string ab;
	for (int i = 0; i < tc; i++)
	{
		cin >> ab;
		int a = stoi(ab.substr(0, 1));
		int b = stoi(ab.substr(2, 1));
		cout << a + b << "\n";
	}
}
