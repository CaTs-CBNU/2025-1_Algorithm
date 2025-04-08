#include <stdio.h>

int main() {
    int a, b, c;
    int arr[100000];
    for (c=0; ; c++) {
        scanf("%d%d", &a, &b);
        if (a==0&&b==0) break;
        arr[c] = a+b;
    }
    for (int i=0; i<c; i++) printf("%d\n", arr[i]);
}