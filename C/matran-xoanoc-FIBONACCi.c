#include <stdio.h>
#include <math.h>
int main (){
	int n;scanf("%d", &n);
	int A[n][n];
	int m=pow(n,2);
	int B[m];
	int f1=0, f2=1;
	B[0]=f1, B[1]=f2;
	for(int i=2;i<m;i++){
		int f3=f1+f2;
		B[i]=f3;
		f1=f2;
		f2=f3;
	}
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
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<n;j++){
	 		printf("%d ", A[i][j]);
		 }
		 printf("\n");
	 }
}