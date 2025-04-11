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
int lcm(int x, int y) {
    return x*y/gcd(x, y);
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d\n%d", gcd(a, b), lcm(a, b));
}