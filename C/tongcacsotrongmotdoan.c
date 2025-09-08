#include <stdio.h>
int main (){
	int u0, d, n;
	scanf("%d%d%d", &u0, &d, &n);
    int A[n];
    A[0] = u0;
    int sum = u0;
    for(int i = 1; i < n; i++){
    	A[i] = A[i-1] + d;
    	sum += A[i];
	}
	printf("%d", sum);
}