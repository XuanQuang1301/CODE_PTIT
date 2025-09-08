#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Không phải số nguyên tố
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Không phải số nguyên tố
        }
    }
    
    return 1; // Là số nguyên tố
}

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
