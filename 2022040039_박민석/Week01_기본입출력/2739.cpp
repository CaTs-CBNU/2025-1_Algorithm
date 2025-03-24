#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < 9; i++)
	{
		int j = i + 1;
		cout << N << " * " << j << " = " << N * j << endl;
	}
}