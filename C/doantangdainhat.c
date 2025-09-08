#include <stdio.h>

int main (){
	
	int t;
	scanf("%d", &t);
	
	for(int l = 1; l <= t; l++){
		int n; 
		scanf("%d", &n);
		int A[100];
		
		for(int i = 0; i < n; i++){
			scanf("%d", &A[i]);
	    }
		int max = 0;
		int cnt = 1;
		for(int i = 1; i < n; i++){
			if(A[i]>A[i-1]){
				cnt++;
			}
			else {
				cnt = 1;
			}
			if(cnt > max){
				max = cnt;
			}
		}
		printf("Test %d:\n%d\n", l, max);
		for(int i = 1; i<n;i++){
			    int cnt = 1;
			    int j;
			for( j = i; j < n; j++){
				if(A[j] > A[j-1]){
					cnt++;
				}
				else{
					cnt = 1;
					break;
				}
				if(cnt == max){
					break;
				}	
			}
			if(cnt == max){
			    for(int k = i-1; k < i+max-1; k++){
				    printf("%d ", A[k]);
			    }
                   printf("\n");
			}
			i = j;	
		}
	}
}