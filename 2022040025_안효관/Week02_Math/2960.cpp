#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num,k;
	cin >> num; 
	vector<bool> a(num+1, true);
	int count = 0;
	cin >> k;    
	for (int i = 2; i <= num; i++) {
			for (int j = i; j <= num; j += i) {
				if (a[j]) {
					a[j] = false;  
					count++;
					if (k == count) {
						cout << j;
						return 0;
					}
				}
			}
	}

}