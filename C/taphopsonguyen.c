#include <stdio.h>
void sx(int A[], int n){
	int k;
	for(int i=0;i<n;i++){
	   for(int j=i+1;j<n;j++){
	   	if(A[j]<A[i]){
	   		k=A[i];
	   		A[i]=A[j];
	   		A[j]=k;
		   }
	   }	
	}
}
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	int A[n], B[m];
	for(int i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &B[i]);
	}
	sx(A, n);
	sx(B, m);
    int cnt[1000]={0}, k=0, C[100];
    for(int i=0;i<n;i++){
    	cnt[A[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[A[i]]>=1){
			C[k]=A[i];
			k++;
			cnt[A[i]]=0;
		}
	}
	int r=0, D[100];
	for(int i=0;i<m;i++){
    	cnt[B[i]]++;
	}
	for(int i=0;i<m;i++){
		if(cnt[B[i]]>=1){
			D[r]=B[i];
			r++;
			cnt[B[i]]=0;
		}
	}   
	for(int i=0;i<k;i++){
		for(int j=0;j<r;j++){
			if(C[i]==D[j]){
				printf("%d ", C[i]);
			}
		}
	}
	printf("\n");
	for(int i=0;i<k;i++){
		int s = 0;
		for(int j=0;j<r;j++){
			if (C[i] == D[j] ){
				s=0;
			    break;
			}
			s=1;
		}
		if(s!=0){
		printf("%d ", C[i]);	
	    }
	}
	printf("\n");
	for(int i=0;i<r;i++){
		int s=0;
		for(int j=0;j<k;j++){
			if(D[i]==C[j]){
			    s=0; 
				break; 
			}
			s=1;
		}
		if(s!=0){
		printf("%d ", D[i]);	
	    }
	}
}