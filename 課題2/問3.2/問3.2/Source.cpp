#include<stdio.h>
int main(void) {
	int i, j, n;
	printf("値段？　");
	scanf_s("%d", &n);

	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <i; j++)
		
			printf(" ");
		
		
			for (j = j; j <= n; j++) {

				printf("*");
				
			}
			printf("\n");
	}

	return 0;
}