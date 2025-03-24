#include <iostream>
using namespace std;

int main()
{
	int N;
	int num;
	int Max_num = 0;
	int Min_num = 0;

	cin >> N;

	cin >> num;
	Max_num = num;
	Min_num = Max_num;

	for (int i = 1; i < N; i++)
	{
		cin >> num;

		if (Max_num < num)
		{
			Max_num = num;
		}
		if (Min_num > num)
		{
			Min_num = num;
		}
	}

	cout << Min_num << " " << Max_num;
}