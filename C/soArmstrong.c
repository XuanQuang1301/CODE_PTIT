#include <stdio.h>
#include <math.h>
 int Dau(int n){
 	int dau=n;
 	while(dau>10){
 	dau/=10;}
 	return dau;
 }
 int main (){
 	int n;scanf("%d", &n);
 	int i=n;
 	int tong=0;
 	while(i>0){
 		tong += pow((i%10),Dau(n));
 		i/=10;
	 }
	 if(tong==n) printf("1");
	 else printf("0");
 }