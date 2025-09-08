#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct Danhgia{
	char comment[101];
	int dem;
};
int check(char a[]){
	if(strcmp(a, "good") == 0) return 1;
	if(strcmp(a, "bad") == 0) return 1;
	if(strcmp(a, "wonderful") == 0) return 1;
	if(strcmp(a, "terrible") == 0) return 1;
	else return 0;
}

int n = 0;
int main (){
	struct Danhgia a[1000], tmp;
	char b[1000];
	while(scanf("%s", b) != -1){
		if(check(b)){
			int r = 0;
			for(int i = 0; i < n; i++){
				if(strcmp(b, a[i].comment) == 0){
					r = 1;
					break;
				}
			}
			if(r == 0){
				strcpy(a[n].comment, b);
				a[n].dem = 1;
				n++;
			}
			else {
				a[n].dem += 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s %d\n", a[i].comment, a[i].dem);
	}
}