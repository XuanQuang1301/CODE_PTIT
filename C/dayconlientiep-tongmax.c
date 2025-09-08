#include <stdio.h>
#include <string.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long A[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &A[i]);
		}
		int max = 0;
		for(int i=0;i<n;i++){
			int tmp = i;
			int tong = 0;
			for(int j=i;j<=tmp;j++){
			tong += A[j];
			if(tong >= max){
			max = tong;	
			}
			tmp++;
			if(tmp == n) break;	
			}
		}
		printf("%d\n", max);
	}
}