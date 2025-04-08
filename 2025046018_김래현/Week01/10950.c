#include <stdio.h>

int main() { 
    int c, a, b;
    int arr[9999];
    scanf("%d", &c);
    for(int i=0; i<c; i++) {
        scanf("%d%d", &a, &b);
        arr[i]=a+b;
    }
    for(int i=0; i<c; i++) printf("%d\n", arr[i]);
}