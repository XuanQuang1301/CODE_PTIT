#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void dao(int a[], int n){
    int l=0, r=n-1;
	while(l<r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;
		--r;
	}
}
void add(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b), n=0;
	int x[n1], y[n1], z[n1+1];
	for(int i= 0; i < n1; i++) x[i] = a[i] - '0';  
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	dao(x, n1);
	dao(y, n2);
	for(int i = n2; i < n1; i++){
        y[i]=0;
	}
	int nho = 0;
	for(int i = 0; i < n1; i++){
        int tmp = x[i] + y[i] + nho;
		z[n++] = tmp % 10;
		nho = tmp/10;
	}
	if(nho) z[n++] = nho;
	for(int i=n-1;i>=0;i--){
		printf("%d", z[i]);
	}
}
int main (){
//	int t;
//	scanf("%d", &t);
//	while(t--){
		char a[1001], b[1001];
		scanf("%s %s", a, b);
		if(strlen(a) >= strlen(b)) add(a, b);
		else add(b, a);
		printf("\n");
//	}
}