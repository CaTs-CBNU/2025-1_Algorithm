#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char c[1000001] = {'0'};
    char boom[37];
    char stack[1000001];
    int top= -1;
    int a;
    scanf("%s", c);
    scanf("%s", boom);

    int cL = strlen(c);
    int boomL = strlen(boom);

    for(int i=0; i<cL; i++) {
        stack[++top] = c[i];
        if(top>=boomL-1) {
            a=1;
            for(int j=0; j<boomL; j++) {
                if(stack[top-boomL+1+j] != boom[j]) {
                    a=0;
                    break;
                }
            }
            if(a==1) top -= boomL;
        }
    }

    if(top==-1) printf("FRULA");
    else {
        for(int i=0; i<=top; i++) printf("%c", stack[i]);
    }

    return 0;
}