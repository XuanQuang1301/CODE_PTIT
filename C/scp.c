#include <stdio.h>
#include <math.h>
int soChinhphuong(int a){
  if((int)sqrt(a)==sqrt(a)){
	 return a;
    }	
    return 0;
}
int main (){
	int m, n;
	scanf("%d %d", &m, &n);
	int tongso =0;
	for(int i=m;i<=n;i++){
	if(i==soChinhphuong(i)){
		tongso += 1;
	}
	}printf("%d\n", tongso);
	for(int i=m;i<=n;i++){
		if(i==soChinhphuong(i)){
			printf("%d\n", i);
		}
	}
}

