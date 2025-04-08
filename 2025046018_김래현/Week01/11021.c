#include <stdio.h>

int main() { 
    int c, a, b;
    int arr[999999];
    scanf("%d", &c);
    for(int i=0; i<c; i++) {
        scanf("%d%d", &a, &b);
        arr[i]=a+b;
    }
    for(int i=0; i<c; i++) printf("Case #%d: %d\n", i+1, arr[i]);
}