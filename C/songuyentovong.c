#include <stdio.h>
#include <string.h>
int snt(int n){
	for(int i = 2; i < n; i++){
		if(n % i ==0) return 0;
	}
	return n > 1;
}

int main (){
	int t; 
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		int s = 0;
		for(int i = 0; i < strlen(a); i++){
			int t = 0;
			for(int j = i; j < strlen(a); j++){
				t = t* 10 + (a[j] - '0');
			}
			for(int j = 0; j < i; j++){
			   t = t * 10 + (a[j] - '0');	
			}
			if(snt(t) != 1){
				s = 1;
			}  
		}
		if(s == 0){
			printf("%d ", 1);
		}	
		else printf("%d ", 0);
	}
}