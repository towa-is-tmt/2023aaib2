
// week11-4b.cpp part2
#include <stdio.h>
int main()
{
	int a[10][10];
	int m, n; //part 1: input
	scanf("%d%d", &m , &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<m; i++){ // part 2: output
		for(int j=0; j<n; j++){
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}




}
