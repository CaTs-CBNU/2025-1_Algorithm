#include <iostream>
#include <string>

using namespace std;;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int max, min;
	int arr[10000000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < N; i++) {
		if (min >= arr[i])
			min = arr[i];
		if (max <= arr[i])
			max = arr[i];
	}
	cout << min << " " << max << "\n";
	return 0;
}