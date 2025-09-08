#include <stdio.h>
int n, m, a[105][105];

int check(int i, int j){
	if(i >= 0 && i < n && j >= 0 && j < m){
		return 1;
	}
	else return 0;
}
int kt1(int i, int j){
	if(check(i - 1, j - 1) && a[i - 1][j - 1] >= a[i][j]) return 0;
	if(check(i - 1, j) && a[i - 1][j] >= a[i][j]) return 0;
	if(check(i - 1, j + 1) && a[i - 1][j + 1] >= a[i][j]) return 0;
	if(check(i, j - 1) && a[i][j - 1] >= a[i][j]) return 0;
	if(check(i, j + 1) && a[i][j + 1] >= a[i][j]) return 0;
	if(check(i + 1, j - 1) && a[i + 1][j - 1] >= a[i][j]) return 0;
	if(check(i + 1, j) && a[i + 1][j] >= a[i][j]) return 0;
	if(check(i + 1, j + 1) && a[i + 1][j + 1] >= a[i][j]) return 0;
	return 1;
}
int main (){
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0;
	for(int i  = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(kt1(i, j) == 1){
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}
