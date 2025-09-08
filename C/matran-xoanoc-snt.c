#include <stdio.h>
#include <math.h>
int snt(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main (){
	int t;scanf("%d", &t);
	int k=1;
	while(k<=t){
		int n;
		scanf("%d", &n);
		int m=pow(n, 2);
		int B[1000]={0};
		int cnt=0;
		for(int i=2;;i++){
			if(snt(i)){
				B[cnt]=i;
				cnt++;
			}
			if(cnt>m-1){
			 break;}
		}
     int A[n][n];
     int c1=0, c2=n-1, h1=0, h2=n-1;
     int s=0;
     while(c1<=c2 && h1<=h2){
     	for(int i=c1;i<=c2;i++){
     		A[h1][i]=B[s];
     		++s;
		 }
		 ++h1;
		 for(int i=h1;i<=h2;i++){
		 	A[i][c2]=B[s];
		 	++s;
		 }
		 --c2;
		if(c1<=c2){
		 for(int i=c2;i>=c1;i--){
		 	A[h2][i]=B[s];
		 	++s;
		 }
		}
		 --h2;
		 for(int i=h2;i>=h1;i--){
		 	A[i][c1]=B[s];
		 	++s;
		 }
		 ++c1;
	 }
	 printf("Test %d:\n", k);
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<n;j++){
	 		printf("%d ", A[i][j]);
		 }
		 printf("\n");
	 }
//	 for(int i=0;i<cnt;i++){
//	 	printf("%d ", B[i]);
//	 }
	 k++;
	}
}