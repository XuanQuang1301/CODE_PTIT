#include <stdio.h>
#include <math.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	  int rong=abs(c-a);
	  int dai=abs(d-b);
	    if(rong == dai)
	       printf("YES\n");
	    else printf("NO\n");
	}
}
	
