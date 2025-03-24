#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++) cout << "*";
		for (int k = 0; k < (n-i)*2; k++) cout << " ";
		for (int l = 0; l < i; l++) cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n-i; j++) cout << "*";
		for (int k = 0; k < i*2; k++) cout << " ";
		for (int l = 0; l < n-i; l++) cout << "*";
		cout << "\n";
	}
}
