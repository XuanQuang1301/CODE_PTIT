#include <stdio.h>
#include <math.h>
int max(int n, int m){
	if(n > m) return n;
	return m;
}
int min(int n, int m){
	if(n < m) return n;
	return m;
}
int main (){
	int t;
	scanf("%d", &t);
	int sumL = 0, sumX = 0;
	int minL = 1e9, minX = 1e9;
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		
		sumL += n;
		sumX += m;
		minL = min(minL, n);
		minX = min(minX, m);
	}
	sumL += minX;
	sumX += minL;
	printf("%d", max(sumL, sumX));
}