#include <stdio.h>
int cnt[10001];
int main(){
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n; 
		scanf("%d", &n);
		int a[n];
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			cnt[i] = 1;
		}
		for(int i = n - 1; i > 0; i--){
			if(a[i] > a[i-1]){
				cnt[i - 1] = cnt[i] + 1;
			}
			else cnt[i-1] = 1;
		}
		int max = 0;
		for(int i = 1; i < n; i++){
			if(cnt[i] > max){
				max = cnt[i];
			}
		}
		for(int i = 0; i < n; i++){
			if(cnt[i] == max){
				for(int j = i; j < max; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
}