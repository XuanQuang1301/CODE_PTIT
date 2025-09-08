#include <stdio.h>
#include <math.h>
int snt(int n){
	if(n==0||n==1) return 0;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;}
 int fibo(int n){
 	if(n==0||n==1) return 1; 
 	long long n2=0, n1=1;
 	for(int i=0;i<=n;i++){
 		int n0=n1+n2;
 		if(n0==n) return 1;
 		else if(n0>n) break;
 		n2=n1;
 		n1=n0;
	 }
	 return 0;
}
 int tong (int t){
 	int s=0;
 	while(t>0){
 		s+=t%10;
 		t/=10;
	 }
	 return s;
 }
 int main (){
 	int a, b;
 	scanf("%d%d", &a, &b);
 	int max=a;
 	int min =b;
    if(a<b){
 	for(int i=a; i<=b;i++){
 		if(snt(i)&&fibo(tong(i))) printf("%d ", i);
	 }
 }
 else {
 		for(int i=b; i<=a;i++){
 		if(snt(i)&&fibo(tong(i))) printf("%d ", i);
	 }}
	 }
