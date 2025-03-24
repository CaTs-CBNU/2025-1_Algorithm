#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int num1;
	int num2;
	int sum[1000000];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num1 >> num2;
		sum[i] = num1 + num2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << sum[i] << "\n";
	}

	return 0;

}