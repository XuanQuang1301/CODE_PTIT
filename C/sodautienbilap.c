#include <stdio.h>
int main (){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
	    scanf("%d", &n);
	     int a[n];
	    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	    int cnt[1000]={0};
	    int dem = -1;
	    for(int i = 0; i < n; i++){
	    	int cnt = 0;
	    	for(int j = i + 1; j < n; j++){
	    		if(a[j] == a[i]){
	    			dem = a[i];
	    			cnt = 1;
	    			break;
				}
			}
			if(cnt == 1){
				break;
			}
		}
		if(dem != -1){
			printf("%d\n", dem);
		}
		else printf("NO\n");
	}
}