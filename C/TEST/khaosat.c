#include <stdio.h>
#include <string.h>
struct ma{
     char gm[101];
	 int ts;	
};
int main (){
	struct ma a[1000], neww;
	int n = 0;
	char x[100], y[100], z[100];
	while(scanf("%s %s %s", x, y, z) != -1){
		int indx = -1;
		for(int i = 0; i < n; i++){
			if(strcmp(z, a[i].gm) == 0){
				indx = i;
				break;
			}
		}
		if(indx == -1){
		//	ma neww;
			strcpy(neww.gm, z);
			a[n].ts = 1;
			a[n] = neww;
			n++;
		}
		else {
			a[n].ts += 1;
		}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].ts < a[j].ts){
				strcpy(neww, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], neww);
			}
		}
	}
	}
	
}