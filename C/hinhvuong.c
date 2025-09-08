#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int A[n*2 - 1][n*2 - 1];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n*2 - i - 1; j++) {
            A[i][j] = n - i;
            A[n*2 - i - 2][j] = n - i;
            A[j][i] = n - i;
            A[j][n*2 - i - 2] = n - i;
        }
    }
    for (int i = 0; i < n*2 - 1; i++) {
        for (int j = 0; j < n*2 - 1; j++) {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
