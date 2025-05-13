#include <iostream>
using namespace std;

int main(){
	int n;
	int n2;
	int num[1000000];
	long long  sum = 0;
	cin >> n;
	int a, b, c;
	for (int i = 0; i < n; i++) {
        sum=0;
		cin >> n2;
		for (long long j = 0; j < n2; j++) {
			cin >> num[j];
		}
		for (long long  k = 0; k < n2; k++) {
			for (long long  t = k+1; t < n2; t++) {
				a=num[k];
				b=num[t];
                if(num[k]<num[t]){
                    a=num[t];
                    b=num[k];
                }
				while (b != 0) {
					c = a % b;
					a = b;
					b = c;
				}
				sum += a;
			}
		}
        cout<<sum<<"\n";
	}
}