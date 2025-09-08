#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int cnt=0;
		for(int i=2;i<=n;i++){
			int s=i;
			while(s%m==0){
				cnt++;
				s/=m;
			}
		}
		printf("%d\n", cnt);
	}
}