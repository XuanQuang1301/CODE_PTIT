#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	int t;scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d %d", &m, &n);
		int a[1000], b[1000];
		char k;scanf(" %c", &k);
		for(int i=0;i<m;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
		}
		if( k == 'T' || k == 'G'){
			for(int i=0;i<n;i++){
				a[i+m]=b[i];
			}
			m+=n;
		 if(k== 'T'){
			int s=0;
			for(int i=0;i<m;i++){
				for(int j=i;j<m;j++){
					if(a[j]<a[i]){
						s=a[i];
						a[i]=a[j];
						a[j]=s;
					}
				}
			}
		}
		 else if(k == 'G'){
			int r=0;
			for(int i=0;i<m;i++){
				for(int j=i;j<m;j++){
					if(a[j]>a[i]){
						r=a[i];
						a[i]=a[j];
						a[j]=r;
					}
				}
			}
		}
		for(int i=0;i<m;i++){
			printf("%d ", a[i]);
		}
		}
		else if(k=='F'){
			for(int i=0;i<n;i++){
				a[i+m]=b[i];
			}
			m+=n;
			for(int i=0;i<m;i++){
				printf("%d ", a[i]);
			}
		}
		else if(k == 'A'){
			int y=0;
			for(int i=0;i<m;i++){			
				b[i+n]=a[i];
			}
			n+=m;
			for(int i=0;i<n;i++){
				printf("%d ", b[i]);
			}
		}
		printf("\n");
	}
}