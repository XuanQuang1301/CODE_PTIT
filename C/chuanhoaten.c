#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void chuanHoa(char A[]){
	A[0]=toupper(A[0]);
	for(int i=1;i<strlen(A);i++){
		A[i]=tolower(A[i]);
	}
}
int main (){
	int t; scanf("%d", &t);
	getchar();
	while(t--){
	char A[1000], B[20][50];
	gets(A);
	int n=0;
	char *token = strtok(A, " ");
	  while(token != NULL){
	  	strcpy(B[n], token);
	  	n++;
	  	token = strtok(NULL, " ");
	  }
	  for(int i=0;i<n;i++){
	  	chuanHoa(B[i]);
	  	printf("%s", B[i]);
	  	if(i != n-1){
	  		printf(" ");
		  }
	  }
	  printf("\n");
}
}