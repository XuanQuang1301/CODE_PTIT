#include <stdio.h>
#include <string.h>
int main (){
	int t; scanf("%d", &t);
	while(t--){
	  int n;
	  char c;
	  int chan=0, le=0;
	  int cnt=0;
	while(1){
	   scanf("%d%c", &n, &c);
	   	if(n%2==0){
	   		chan++;
		}
		else le++;
		if(c == '\n') break;
	}
	if((chan>le) && (chan+le)%2==0){
		printf("YES\n");
	}
	else if((le>chan) && (chan+le)%2!=0){
		printf("YES\n");
	}
	else printf("NO\n");
    }
}