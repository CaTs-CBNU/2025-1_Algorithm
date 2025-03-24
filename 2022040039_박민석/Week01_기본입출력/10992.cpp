#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	int pos = 2 * N - 1;

	if (N == 1)
	{
		cout << "*";
		return 0;
	}

	for (int i = 0; i < N; i++)
	{
		int ipos = 2 * i - 1;
		if (i == N - 1)
		{
			for (int j = 0; j < pos; j++)
			{
				cout << "*";
			}
		}
		else
		{
			if (i == 0)
			{
				for (int j = N; j > i + 1; j--)
				{
					cout << " ";
				}
				cout << "*" << "\n";
			}
			else
			{
				for (int j = N; j > i + 1; j--)
				{
					cout << " ";
				}
				cout << "*";
				for (int j = 0; j < ipos; j++)
				{
					cout << " ";
				}
				cout << "*" << "\n";
			}
		}
	}
}