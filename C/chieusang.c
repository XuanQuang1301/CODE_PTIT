#include <stdio.h>

int main (){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int M[m];
	for(int i = 0; i < m; i++){
		scanf("%d", &M[i]);
	}
	int a[n+1];   
    for(int i = 1; i <= n; i++) {
        a[i] = 0;   
    }
	int s = 0;
	for(int i = 1; i <= n; i++){
		if(i == M[s]){
			for(int j = i - k; j <= i + k; j++){
				if (j >= 1 && j <= n) { 
                    a[j] = 1;
                }
			}
			s+=1;
		}
	}
//	for(int i = 1; i <= n; i++ ){
//		printf("%d", a[i]);
//	}
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			int cnt = 0;
			while(a[i] == 0 && i <= n){
				cnt++;
				i++;
			}
//			printf("%d ",cnt);
			if(cnt <= 2*k+1){
			    dem++;
			}
			else{
				while(cnt > 0){
					dem++;
					cnt -= (2*k+1);
				}
			}
		}
	}
	printf("%d", dem);
}