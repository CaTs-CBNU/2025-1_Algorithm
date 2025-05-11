#include <stdio.h>
#include <string.h>

int now = 0;

void push(int a[], int b) {
    now++;
    a[now] = b;
}

void pop(int a[]) {
    if(now) {
        printf("%d\n", a[now]);
        now--; }
    else printf("-1\n");
}

void size(int a[]) {
    printf("%d\n", now);
}

void empty(int a[]) {
    if(now) printf("0\n");
    else printf("1\n");
}

void top(int a[]) {
    if(now) printf("%d\n", a[now]);
    else printf("-1\n");
}

int main() {
    int n, a;
    char c[10];
    scanf("%d", &n);
    int stack[10001];
    for(int i=0; i<n; i++) {
        scanf("%s", &c);
        if(strcmp(c, "push")==0) {
            scanf("%d", &a);
            push(stack, a);
        } else if(strcmp(c, "pop")==0) pop(stack);
        else if(strcmp(c, "size")==0) size(stack);
        else if(strcmp(c, "empty")==0) empty(stack);
        else if(strcmp(c, "top")==0) top(stack);
    }
}