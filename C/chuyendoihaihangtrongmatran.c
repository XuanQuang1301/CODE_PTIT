#include <stdio.h>
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int c[50][50];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &c[i][j]);
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= n; i++) {
        int temp = c[i][a];
        c[i][a] = c[i][b];
        c[i][b] = temp;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
