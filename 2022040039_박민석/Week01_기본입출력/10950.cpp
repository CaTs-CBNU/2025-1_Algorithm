
#include <iostream>
using namespace std;

int main()
{
	int T = 0;
	int a, b;
	int c[100];

	cin >> T;

	for (int j = 0; j < T; j++)
	{
		cin >> a >> b;
		c[j] = a + b;
	}

	for (int j = 0; j < T; j++)
	{
		cout << c[j] << "\n";
	}
}
