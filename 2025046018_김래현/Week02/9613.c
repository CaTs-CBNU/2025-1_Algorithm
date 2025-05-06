#include <stdio.h>

int gcd(int x, int y) {
    int temp = 1;
    while (temp != 0) {
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}

int main() {
    int testCase;
    scanf("%d", &testCase);
    int num; 
    long long int sum;
    //long long int arr[testCase];
    for (int i=0; i<testCase; i++) {
        int nums[100];
        sum = 0;
        scanf("%d", &num);
        for(int j=0; j<num; j++) scanf("%d", &nums[j]);
        
        for(int j=0; j<num; j++) {
            for (int k=j+1; k<num; k++) {
                sum += gcd(nums[j], nums[k]);
            }
        }
        printf("%lld\n", sum);
    }
}