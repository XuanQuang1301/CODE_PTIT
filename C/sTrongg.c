#include<stdio.h>
#include<math.h>
int giaiThua(int n){
	long long giaithua =1;
	if(n==0||n==1) return giaithua;
	else {
		for(int i=n;i>=1;i--){
			giaithua *= i;
		}
		return giaithua;
	}
}
	int strong(int m){
	int tong=0;
	int i=m;
	while(i!=0){
		tong += giaiThua(i%10);
		i/=10;
	}
	if(tong==m) return m;
	 return 0;
}
int main (){
	int a, b;scanf("%d%d", &a,&b);
	if(a<=b){
	for(int i=a;i<=b;i++){
		if(strong(i))
		printf("%d ", i);
	}
}
else {
	for(int i=b;i<=a;i++){
		if(strong(i))
		printf("%d ", i);
}
}}