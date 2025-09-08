#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int max=0;
		int s=0;
		while (n--){
			int i=0;
			scanf("%d", &i);
			if(i>=max){
				s++;
				max=i;
			}
		}
			printf("%d", s);
	}
}