#include <stdio.h>
#include <string.h>
int main (){
	int n;
	scanf("%d", &n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d", A+i);
	}
	int max1 = A[0], max2 = A[1];
	for(int i=0;i<n;i++){
		if(A[i]>max1){
			max1=A[i];
		}
	}
	for(int i=0;i<n;i++){
		if(A[i]>max2 && A[i]!= max1){
			max2=A[i];
		}
	}
	printf("%d %d", max1, max2);
}