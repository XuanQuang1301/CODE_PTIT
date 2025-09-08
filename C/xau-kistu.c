#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	int t ;
	scanf("%d", &t);
	getchar();
	while(t--){
	char A[200];
	gets(A);
	char B[200];
	gets(B);
	char C[50][50];
	int k=0;
	char *token = strtok(A, " ");
	while(token != NULL){
		if(k>=1){
			int s=0;
	      	for(int i=0;i<k;i++){
			    if(strcmp(C[i], token) == 0){
			    	s=1;break;
				}
		    }
		    if(s==0){
		    	strcpy(C[k], token);
		    	k++;
			}	
	    }
	    else if(k==0){
		strcpy(C[k], token);
		k++;
		}
	    token = strtok(NULL, " ");
	}
	char D[50][50];
	int n=0;
	char *token1 = strtok(B, " ");
	while(token1 != NULL){
		if(n>=1){
			int s=0;
	      	for(int i=0;i<n;i++){
			    if(strcmp(D[i], token1) == 0){
			    	s=1;break;
				}
		    }
		    if(s==0){
		    	strcpy(D[n], token1);
		    	n++;
			}	
	    }
	    else if(n==0){
		strcpy(D[0], token1);
		n++;
		}
	    token1 = strtok(NULL, " ");
	}
    char E[50][50]; 
    int s=0;
	for(int i=0;i<k;i++){
		int m=0;
		for(int j=0;j<n;j++){
			if( strcmp(C[i], D[j]) == 0){
				m=1;
				break;
			}
		}
		if(m!=1){
			strcpy(E[s], C[i]);
			s++;
		}
	}
	for(int i=0;i<s;i++){
		int d = i;
		for(int j=i+1;j<s;j++){
			if(strcmp(E[j], E[d]) < 0){
				char p[100];
				strcpy(p, E[d]);
				strcpy(E[d], E[j]);
				strcpy(E[j], p);
			}
		}
	}
	for(int i=0;i<s;i++){
		printf("%s ", E[i]);
	}
	printf("\n");
  }
}