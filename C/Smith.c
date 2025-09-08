#include<stdio.h>
int chuSo(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int nhanTu(int n){
	int t=0;	
	for(int i=2;i<=n;i++){

	while(n%i==0){
		t+=chuSo(i);
		n/=i;
    }	
 }
 return t;
}
int main (){
	int n;scanf("%d", &n);
	if(chuSo(n)==nhanTu(n)) printf("YES");
	else printf("NO");
}
