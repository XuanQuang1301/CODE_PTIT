#include<stdio.h>
#include <math.h>
int cP(int n){
	if((int)sqrt(n)==(float)sqrt(n)){
	return n;
	}
}

int main (){
	int m, n;
scanf("%d%d", &m,&n);
int tong=0;
for(int i=m;i<=n;i++){
	if(cP(i)){
	tong++;}
}
printf("%d\n", tong);

	    for(int i=m;i<=n;i++){
     	printf("%d\n", cP(i));}
		 return 0;}
