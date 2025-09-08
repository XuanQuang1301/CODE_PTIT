#include <stdio.h>
#include <string.h>
int main (){
	int t;scanf("%d", &t);
	getchar();
	while(t--){
	char a[19];
	scanf("%s", a);
	long long s=0;
	for(long long i=0;i<strlen(a);i++){
		if(a[i]=='0' || a[i]=='8' || a[i]=='9' ){
			s=s*10;
		}
		else if( a[i]=='1' ){
			s=s*10+1;
		}
		else{
		 s=-1;
		 break;}
	}

	if(s==0||s==-1) {
		printf("INVALID");
	}
	else printf("%lld", s);
 } 
}