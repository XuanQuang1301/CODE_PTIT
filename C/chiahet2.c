#include<stdio.h>
#include<math.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int s=0;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				if(i%2==0)
				 s++;
				if((n/i)%2==0)
				 s++;
				 if(i*i==n&&i%2==0)
				 s--;
			}
		}
		printf("%d\n", s);
	}
}