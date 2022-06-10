#include<stdio.h>
int main(void) {
	int n, i, j;
	n = 9;

	printf("   |");
	for (i = 1; i <= n; i++)
		printf("%4d", i);
	printf("\n");


	printf("---+");
	for (i = 1; i <= n; i++)
		printf("----");
	printf("\n");

	

		
		for ( i = 1; i <=9; i++)
		{
			printf("%3d|", i);
			for ( j = 1; j <=9; j++)
			{
				printf("%4d", i*j);
			}
			printf("\n");
		}
	return 0;
}