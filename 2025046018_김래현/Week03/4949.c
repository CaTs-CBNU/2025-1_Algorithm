#include <stdio.h>
#include <string.h>

int main() {
    int top, valid;
    char c[102];
    while(1) {
        fgets(c, 102, stdin);
        if(strcmp(c, ".")==0 || strcmp(c, ".\n")==0) break;

        char stack[102];
        top=-1; valid=1;

        for(int i=0; c[i] != '\0'; i++) {
            if(c[i]=='('||c[i]=='[') stack[++top]=c[i];
            else if(c[i]==')') {
                if(top==-1||stack[top]!='(') {
                    valid = 0;
                    break;
                } top--;
            }
            else if(c[i]==']') {
                if(top==-1||stack[top]!='[') {
                    valid = 0;
                    break;
                } top--;
            }
        }

        if(valid && top==-1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
