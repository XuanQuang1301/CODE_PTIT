#include <stdio.h>
#include <math.h>

int isSquare(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int main() {
    int start, end;

    printf("Nhập đoạn số (bắt đầu và kết thúc): ");
    scanf("%d %d", &start, &end);

    int chinhPhuong[end - start + 1];
    int count = 0;

    for (int i = start; i <= end; ++i) {
        if (isSquare(i)) {
            chinhPhuong[count++] = i;
        }
    }

    printf("Các số chính phương trong đoạn là:\n");
    for (int i = 0; i < count; ++i) {
        printf("%d\n", chinhPhuong[i]);
    }

    return 0;
}