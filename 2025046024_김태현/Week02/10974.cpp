#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(NULL);


	int n;

	cin >> n;

	vector<int> v;

	for (int i = 1;i <= n;i++) {
		v.push_back(i);
	}



	for (int i = 0;i < n;i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	while (next_permutation(v.begin(), v.end())) {
		/*for (int i = 0;i < n;i++) {
			cout << v[i] << " ";
		}*/
		for (int i : v) {
			cout << i << " ";
		}
		cout << '\n';


	}

	return 0;

}