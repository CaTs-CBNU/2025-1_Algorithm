#include <stdio.h>

int n, m;
int per[10] = {0};
int used[11] = {0};

void dfs(int a) {
    if(a==m) {
        for(int i=0; i<m; i++) printf("%d ", per[i]+1);
        printf("\n");
        return;
    } else {
        for(int i=0; i<n; i++) {
            if(used[i]==1) continue;
            per[a]=i;
            used[i]=1;
            dfs(a+1);
            used[i]=0;
        }
    }

}

int main() {
    scanf("%d %d", &n, &m);
    dfs(0);
    return 0;
}