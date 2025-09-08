#include <stdio.h>
#include <string.h>
int main (){
	int chan = 0, le = 0;
	char k = ' ';
	while(k != '\n'){
		int n;
		scanf("%d", &n);
		if(n%2==0)  chan++;
		else le++;
		k = getchar();
	}
	if(chan > le) printf("CHAN");
	if(le>chan) printf("LE");
	else printf("CHANLE");
}