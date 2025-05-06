#include <stdio.h>
#include <math.h>

int is_prime(int a) {
    if(a<2) return 0;
    for(int i=2; i<=sqrt(a); i++) {
        if(a%i==0) return 0;
    }
    return 1;
}

int main() {
    int num, prime, sum=0;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%d", &prime);
        sum += is_prime(prime);
    }
    printf("%d", sum);
    return 0;
}