#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++) cout << " ";
		for (int k = 0; k < 2 * i - 1; k++)
		{
			if (k == 0 || k == 2 * i - 2) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < 2 * n - 1; i++) cout << "*";
