#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int pos = 2 * i + 1;
		for (int j = N; j > i+1; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < pos; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}