#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cout << n<<' * '<<i<<' = '<<n*i<<'\n';
	}
}