
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c[100];
	int i = 0;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}

		c[i] = a + b;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		cout << c[j] << "\n";
	}

}
