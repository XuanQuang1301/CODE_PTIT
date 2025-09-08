#include <stdio.h>
#include <math.h>
int main (){
    int t;scanf("%d", &t);
    while(t>0){
    	int n;scanf("%d", &n);
    	int tong=0;
    	while(n>0){
    		tong += n%10;
    		n/=10;
		}
		if(tong%10==0){
			printf("YES");
		}
		t--;}
	 printf("NO");
	return 0;
}