#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct tienHoa{
	char ten[1000];
	int can;
	int co;
	int tong;
};
int main (){
	int n; 
	scanf("%d", &n);
	
	struct tienHoa a[1000];
    int cnt = 0;
	for(int i = 0; i < n; i++){
		getchar();
		gets(a[i].ten);
		scanf("%d %d", &a[i].can, &a[i].co);
		a[i].tong = 0;
		while(a[i].co >= a[i].can){
			cnt++;
			a[i].tong ++;
			a[i].co -= a[i].can;
			a[i].co += 2; 
	    }
	}
	printf("%d\n", cnt);
	int max = 0;
	int s;
	for(int i = 0; i < n; i++){
		if(a[i].tong > max){
			max = a[i].tong;
			s = i;
		}
	}
	printf("%s", a[s].ten);

}