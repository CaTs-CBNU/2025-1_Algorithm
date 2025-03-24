#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int ind = 0;
	cin >> s;
	for (int i = 0; i < s.length()/10 + 1; i++)
	{
		cout << s.substr(ind, 10) << "\n";
		ind += 10;
	}
}
