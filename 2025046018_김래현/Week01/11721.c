#include <stdio.h>
#include <string.h>

int main() { 
    char a[101];
    
    fgets(a, sizeof(a), stdin);

    for (int i=0; a[i] != '\0'; i++) {
        if (i%10 == 0 && i != 0) printf("\n");
        if (a[i+1] != NULL) printf("%c", a[i]);
    }
}