#include <stdio.h>
	int a[1000][1000] = {0};
int main (){
	int t = 0;
	scanf("%d ", &t);
	
	int max1 = 0, max2 = 0;
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				a[i][j]++;
			}
		}
		if(n>max1){
			max1 = n;
		}
		if(m>max2){
			max2 = m;
		}
	}
	int min = -1;
	int cnt = 0;
    for(int i = 0; i < max1; i++){
    	for(int j = 0; j < max2; j++){
    		if(a[i][j] == min){
				cnt++;
			}
    		if(a[i][j] > min){
    			min = a[i][j];
    			cnt = 1;
			}
	    }
    }
	printf("%d", cnt);
}