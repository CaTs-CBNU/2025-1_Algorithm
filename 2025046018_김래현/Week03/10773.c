#include <stdio.h>

int main() {
    long long int K, t=0, c=0;
    scanf("%lld", &K);
    long long int arr[100001];
    for(int i=0; i<K; i++) {
        scanf("%lld", &arr[t]);
        if(arr[t]==0) {
            t--;
        } else t++;
    }
    for(int i=0; i<t; i++) {
        c+=arr[i];
    }
    printf("%lld", c);
}