#include <stdio.h>
int main (){
	int dt = 0;
	int t = 3;
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		dt += (n+m)*2;
	}
	if(dt%4==0) printf("YES");
	else printf("NO");
}