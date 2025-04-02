#include <iostream>
using namespace std;

void swap(int numbers[], int i, int j) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}


bool np(int numbers[],int num) {

	int N = num;
	int i = N - 1;
	while (i > 0 && numbers[i - 1] >= numbers[i]) {
		i--;
	}

	if (i == 0) return false;


	int j = N - 1;

	while (numbers[i - 1] >= numbers[j]) {
		j--;
	}


	swap(numbers, i - 1, j);

	int k = N - 1;
	while (i < k) {
		swap(numbers, i++, k--);
	}
	return true;
}


int main() {
	bool a=true;
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 1; i <= num; i++) {
		arr[i - 1] = i;
	}
	while (a) {
		for (int j = 0; j < num; j++) {
			cout << arr[j] << " ";
		}
		cout << "\n";
		a=np(arr, num);
	}
	delete[]arr;
}
