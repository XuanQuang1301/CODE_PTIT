#include<stdio.h>
#include<math.h>
int chinhPhuong(int n){
	if((int)sqrt(n)==(float)sqrt(n)) return n;
	else return 0;
}
int main (){
	int m, n;
	scanf("%d%d", &m,&n);
	int s=0;
	int a[m-n+1];
	for(int i=m;i<=n;i++){
		if(chinhPhuong(i)) s++;
		a[m-n+1]=i;
	}
	printf("%d", s);
	printf("%d",a[m-n+1]);
}
