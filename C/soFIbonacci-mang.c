#include <stdio.h>

long long fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        long long a = 1, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }

    return 0;
}
