#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int A[9];
		A[0]=1, A[1]=2, A[2]=5, A[3]=10, A[4]=20, A[5]=50, A[6]=100, A[7]=200, A[8]=500, A[9]=1000;
          int s=0;
		for(int i=9;i>=0;i--){
			while(A[i]<=n){
			s++;
			n-=A[i];	
			}
		}
		printf("%d\n", s);
	}
}