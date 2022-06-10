#include<stdio.h>
int main(void) {
	int i, j, n;
	printf("値段？　");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			printf("%d ", j % 10);
		}
		printf("\n");
	}
	return 0;
}
