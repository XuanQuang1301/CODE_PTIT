#include <stdio.h>
int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
//	int cnt[1000] = {0};
//	
//	for(int i = 0; i < n; i++){
//		cnt[a[i]]++;
//	}
	int q; scanf("%d ", &q);
	while(q--){
	    int k;
		scanf("%d", &k);
		int dem = 1;
		for(int i = 1; i <= k; i ++){
			int s = 0;
			for(int j = 0; j < i; j++){
				if(a[i] == a[j]){
					s=1;
				}
			}
			if(s==0) dem++;
		}
		printf("%d\n", dem);	
	}
}