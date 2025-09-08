#include <stdio.h>
#include <math.h>
int uocchung(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
   int main (){
   	int n,m;
   	scanf("%d%d", &n,&m);
   	for(int i=n;i<=m;i++){
   		for(int j=i;j<=m;j++){
   			if(uocchung(i,j)==1 )
   			printf("(%d,%d)\n",i,j);
		   }
	   }
   }
