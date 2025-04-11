#include <stdio.h>

long long int gcd(long long int x, long long int y) {
    long long int temp = 1;
    while (temp != 0) {
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}
long long int lcm(long int x, long int y) {
    return x*y/gcd(x, y);
}

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld", lcm(a,b));
    return 0;
}