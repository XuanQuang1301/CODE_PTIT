#include <stdio.h>
int main (){
	int t;scanf("%d", &t);
	int s=1;
	while(s<=t){
		int n, m;scanf("%d %d", &n, &m);
		int k;scanf("%d", &k);
		int a[n+m];
		int b[m];
		for(int i=0; i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<m;i++){
			scanf("%d", &b[i]);
		}

    for (int i = n-1 ; i >= k; i--) {
        a[i + m] = a[i];
    }

    for (int i = 0; i < m; i++) {
        a[i + k] = b[i];
    }
		n+=m;
		printf("Test %d:\n", s);
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	s++;
	printf("\n");
	}
	}
		
		