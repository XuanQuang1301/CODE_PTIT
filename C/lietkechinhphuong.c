#include <stdio.h>
#include <math.h>

int main (){
	int a, b;
	scanf("%d%d", &a, &b);
	int n = sqrt(a);
	int m = sqrt(b);
	if(n*n != a) n+=1;
	int cnt = 0;
	for(int i = n; i <=m; i++){
		cnt++;
	}
	printf("%d\n", cnt);
	for(int i = n; i <= m; i++){
		printf("%d\n", i*i);
	}
}