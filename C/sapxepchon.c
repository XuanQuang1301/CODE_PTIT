#include <stdio.h>
int main (){
	int n;scanf("%d", &n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	int cnt=0;
	
	for(int i=0;i<n-1;i++){
		   int s=i;
		   int k=0;
		for(int j=i+1;j<n;j++){
		  if(A[j]<A[s]){	
			s=j;	
	      } 
		}
		k=A[i];
		A[i]=A[s];
		A[s]=k;
		  
	cnt++;
	printf("Buoc %d: ", cnt);
	for(int i = 0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");

}
}