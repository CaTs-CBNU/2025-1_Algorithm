#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	int a, b;
	for (int i = 0; i < tc; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
}
