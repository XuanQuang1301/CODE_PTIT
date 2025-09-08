#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int kt1(char A[], int n){
	int k=0;
	for(int i=0;i<n-1;i++){
		if(A[i]-'0' >= A[i+1]-'0' ){
			return 0;
		}
	}
	return 1;
}
int kt2(char A[], int n) {
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i]-'0' != A[i + 1]-'0') {
            k = 1;
            break;
        }
    }
    if (k == 0) {
        return 1;
    }
    return 0;
}
int kt3(char A[], int n){
	int k=0;
	for(int i=0;i<n;i++){
		if( A[i]!= 6 && A[i]!= 8){
		k=1;
		break;
	}
	}
	if(k==0){
	return 1;
}
else return 0;
}
int kt4(char A[], int n){
	int k=0;
	for(int i=0;i<2;i++){
		if( A[i] != A[i+1]){
		k=1;
		break;
	}
}
	for(int i=3;i<n-1;i++){
		if(A[i] != A[i+1]){
			k=1;
			break;
		}
	}
	if(k==0){
	return 1;}
	else return 0;
}

int main (){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char A[50];
		gets(A);
		char B[50];
		int n=0;
		for(int i=6;i<strlen(A);i++){
			if(A[i]== '.'){
				continue;
			}
			B[n]=A[i]-'0';
			n++;
		}

    if( kt1(B, n) == 1){
	    printf("YES\n");
    }
    else if(kt2(B, n)){
    	printf("YES\n");
	}
	else if(kt3(B,n)){
		printf("YES\n");
	}
	else if(kt4(B, n)){
		printf("YES\n");
	}
    else printf("NO\n");
	}
}