#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int s;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i) {
                s = A[i][j];
                A[i][j] = A[i][n - j - 1];
                A[i][n - j - 1] = s;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
