#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d", &n);
	int tong = 0;
	int i ;
	for(int i=1;i<=n/2;i++){
		if (n%i==0){
			tong += i;
	}
		}
   if(tong == n){
     	printf("1");
   }
    else{
        printf("0");
    }
	return 0;
}