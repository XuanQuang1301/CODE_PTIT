#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long check1(long long n) {
    int sum = 0;
    while (n!=0){
        int i = n % 10;
        sum += i;
        n /= 10;
        if (i == 4) {
            return 0;
        }
    }
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int pow10 = pow(10, n - 1);
        for (int j = pow10; j < pow(10, n); j++) {
            int cuoi = j % 10;
            int dau = j / pow10;
            if (dau == cuoi && check1(j))
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}