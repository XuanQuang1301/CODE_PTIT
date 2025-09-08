#include <stdio.h>
#include <string.h>
 int kt(char a[]){
 	for(int i = 1;i<strlen(a);i++){
 		if(a[i-1] > a[i]){
 			return 0;
		 }
	 }
	 return 1;
 }
int main (){
	char a[100001];
	int i = 0;
	while(scanf("%s", &a[i]) != '\n'){
		i++;
	}
}