#include <stdio.h>
 
#define MAXN 30
#define MAXM 400
 
int set[MAXN][MAXM];
 
void calculate_subset_sum(int arr[], int n, int m) {
	int i, j;
 
	for(i = 0; i <= n; i++)
		set[i][0] = i;
 
	for(j = 1; j <= m; j++)
		set[0][j] = 0;
 
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= m; j++) {
			set[i][j] = 0;
 
			if(j >= arr[i-1]) {
				if(set[i - 1][j - arr[i - 1]] == 1)
					set[i][j] = 1;
			}
 
			if(set[i - 1][j] == 1)
				set[i][j] = 1;
		}
	}
}
 
int main(int argc, char** argv) {
	int m, n;
	int arr[MAXN];
	int i;
 
	printf("input m, n : ");
	scanf("%d", &m);
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
 
	calculate_subset_sum(arr, n, m);
 
	if(set[n][m])
		printf("Possible\n");
	else
		printf("Impossible\n");
}
