#include <stdio.h>
int snt(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;
	
}
int main (){
	int n;scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(snt(a[i][j])){
				cnt+=a[i][j];
			}
		}
	}
	printf("%d", cnt);
	
}