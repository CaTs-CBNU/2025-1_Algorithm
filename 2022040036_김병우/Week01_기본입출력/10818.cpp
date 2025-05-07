#include <iostream>
#include <climits>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int min = INT_MAX, max = INT_MIN;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > max) max = num;
		if (num < min) min = num;
	}
	cout << min << " " << max << "\n";
}