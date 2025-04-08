#include <stdio.h>

int main() {
    int N, max, min, a;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &a);
        if (i==0) max=min=a;
        if (a>max) max = a;
        if (a<min) min = a;
    }
    printf("%d %d", min, max);
}