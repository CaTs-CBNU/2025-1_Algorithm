#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	
	cin >> N;
	int pos = 2 * N - 1;

	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < 2 * (N - 1 - i); j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = pos - N - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < 2 * (N - 1 - i); j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		if (i != 0)
		{
			cout << "\n";
		}
	}



}