#include <stdio.h>
#include <string.h>

int main() { 
    char a[101];
    
    while(fgets(a, sizeof(a), stdin) != NULL) {
        printf("%s", a);
    }    
}