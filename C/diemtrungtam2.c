#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	int n=0;
	int m=0;
	int s=1;
	int i=1;
	while(i<t){
		int a, b;
		scanf("%d%d", &a, &b);
		if(n==a||n==b||m==a||m==b){
		s++;	
		}
		n=a;
		m=b;
		i++;
	}
	if(s==t-1) printf("Yes");
	else printf("No");
//printf("%d", s);
}