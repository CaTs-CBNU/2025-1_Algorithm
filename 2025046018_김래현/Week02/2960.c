#include <stdio.h>
#include <math.h>

int era(int a[], int b, int c) {
    int count = 0;
    for(int i=2; i<=c; i++) {
        if(a[i]==1) continue;
        else {
            a[i]=1;
            count++;
            if(count==b) return i;
        }
        for(int j=i*2; j<=c; j+=i) {
            if(a[j]==0) {
                count++;
                a[j] = 1;
                if(count==b) return j; }
        }
    }
}

int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[1001] = {0};

    printf("%d", era(arr, k, n));
    return 0;
}