#include <stdio.h>
#include <string.h>

int main() {
    int n, ch;
    char c[51];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        ch=0;
        scanf("%s", &c);
        for(int j=0; c[j] != '\0'; j++) {
            if(c[j] == '(') {
                ch++;
            } else ch--;
            if(ch<0) break;
        }
        if(ch!=0) printf("NO\n");
        else printf("YES\n");
    }
}