#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(void) {

	int n;
	int m;

	cin >> n >> m;

	vector<int> v;

	for (int i = 1;i <= n;i++) {
		v.push_back(i);
	}



	for (int i = 0;i < m;i++) {
		cout << v[i] << " ";
	}
	cout << '\n';
	reverse(v.begin() + m, v.end());
	while (next_permutation(v.begin(), v.end())) {
		for (int i = 0;i < m;i++) {
			cout << v[i] << " ";
		}
		cout << '\n';
		reverse(v.begin() + m, v.end());
	}






}