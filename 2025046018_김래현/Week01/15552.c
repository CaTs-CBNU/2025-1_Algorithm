#include <stdio.h>

int main() {
    int T, a, b;
    scanf("%d", &T);
    int arr[T];
    for(int i=0; i<T; i++) {
        scanf("%d%d", &a, &b);
        arr[i] = a+b;
    }
    for(int i=0; i<T; i++) {
        printf("%d\n", arr[i]);
    }
}