#include <stdio.h>
#include <math.h>
int main (){
    int t;scanf("%d", &t);
    while(t--){
    	int n;scanf("%d", &n);
    	int tong=0;
    	for(int i=n;i>10;i/10){
    		tong += i%10;
		}
		if(tong%10==0){
			printf("YES");
		}}
	 printf("NO");
	return 0;
}