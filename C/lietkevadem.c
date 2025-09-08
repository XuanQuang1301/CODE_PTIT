#include <stdio.h>
int check(int n){
	int sau = n%10;
	n/=10;
	while(n>0){
		int truoc = n % 10;
		if(sau < truoc) return 0;
		sau = truoc;
		n/=10;
	}
	return 1;
}
int cnt[1000001]={0};
int n = 0;
int a[1000001];
int main(){
	int b;
	while(scanf("%d", &b) != -1){
	if(check(b)){
		int kt = -1;
		for(int i = 0; i < n; i++){
			if(a[i] == b){
				kt = i;
				break;
			}
		}
		if(kt != -1){
			cnt[kt]++;
		}
		else{
			a[n] = b;
			cnt[n] = 1;
			n++;
		}
	}
}
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(cnt[j] > cnt[i]){
			    int tmp = a[i];
			    a[i] = a[j];
			    a[j] = tmp;
			    
			    int s = cnt[i];
			    cnt[i] = cnt[j];
			    cnt[j] = s;
			}
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d %d\n", a[i], cnt[i]);
	}
}