#include <stdio.h>
int snt(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main (){
	int n;
	scanf("%d", &n);
	int A[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d", &A[i][j]);
	}
}
	int s;
	int max=0;
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(snt(A[i][j])){
				cnt++;
			}
    	}
		if(cnt>max){
			max=cnt;
			s=i;
		}
}
printf("%d\n", s+1);
	for(int i=0;i<n;i++){
		if(snt(A[s][i])) {
		    printf("%d ", A[s][i]);
		}
	}		
}