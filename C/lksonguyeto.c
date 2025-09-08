#include <stdio.h>
#include <math.h>
 int soNguyento(int n){
 	if(n==1||n==0) return 0;
 	else{
 	for(int i=2;i<=sqrt(n);i++){
 	if(n%i==0) return 0;
    }
 }
 return 1;}
 int main (){
 	int n;scanf("%d", &n);
 		int tong=0;
 	  for(int i=1;;i++){
 	  	if(soNguyento(i)){
 	  		tong+=1;
 	  		printf("%d\n", i);
	   if(tong==n){
	   break;}
	   }
	 }
 }
