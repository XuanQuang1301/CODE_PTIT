#include <stdio.h>

long long fibo(long long n) {
    if (n == 0 || n == 1) return 1;
    long long f0 = 0, f1 = 1;
    while (f1 <= n) {
        long long f2 = f0 + f1;
        if (f2 == n) return 1;
        f0 = f1;
        f1 = f2;
    }
    return 0;
}

long long findFibonacci(int n) {
    long long low = 0, high = 1e18;
    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (fibo(mid)) {
            if (n == 0) return mid;
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return ;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", findFibonacci(n));
    }
    return 0;
}
