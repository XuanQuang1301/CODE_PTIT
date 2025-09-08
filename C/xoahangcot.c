#include <stdio.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	if(n>m){
		int dem = n - m;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(i%2 == 0 && cnt < dem){
				cnt++;
				continue;
				
			}
            if(cnt==dem || i % 2 != 0){
            	for(int j = 0; j < m; j++){
            		printf("%d ", a[i][j]);
				}
				printf("\n");
			}
			
		}		
	}
	else if(m > n){
		int dem = m - n;;
		
		for(int i = 0; i < n; i++){
			int cnt = 0;
			for(int j = 0; j < m; j++){
				if(j%2 != 0 && cnt < dem){
					cnt++;
					continue;
				}
				if(cnt == dem || j % 2 == 0){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}	
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}