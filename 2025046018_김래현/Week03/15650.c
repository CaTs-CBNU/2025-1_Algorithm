#include <stdio.h>

int n, m;
int per[10] = {0};

void dfs(int a, int b) {
    if(a==m) {
        for(int i=0; i<m; i++) printf("%d ", per[i]);
        printf("\n");
        return;
    } else {
        for(int i=b; i<=n; i++) {
            per[a]=i;
            dfs(a+1, i+1);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    dfs(0, 1);
    return 0;
}