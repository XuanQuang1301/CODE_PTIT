#include <stdio.h>
#include <math.h>
int tru(int n, int m){
	if(n < m){
		return m - n;
	}
	else return n - m;
}
int main (){
	int t;
	scanf("%d", &t);
	while(t--){
	int n;
	scanf("%d", &n);
	int a[100001];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	int min = 99999999;
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j ++){
			if(tru(a[i], a[j]) == min){
				cnt++;
			}
			if(tru(a[i], a[j]) < min){
				min = abs(a[i] - a[j]);
				cnt = 1;
			}	
		}
	}
	printf("%d %d\n", min, cnt);
}
}