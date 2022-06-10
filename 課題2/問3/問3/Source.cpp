#include<stdio.h>
int main(void) {
	int i, j,n;
	printf("ílíiÅH");
	scanf_s("%d", &n);
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j < i; j++)
		
			printf("  ");
		printf("\n");
		
		for ( j = j; j <=n; j++)
		{
			printf("*");
			
		}
		
	}

	return 0;
}