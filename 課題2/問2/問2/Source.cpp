#include<stdio.h>
int main(void) {
	int sum, n;
	
	sum = 0;
	do
	{
		printf("2桁の整数を入力してください　");
		scanf_s("%d", &n);
		sum = n + sum;

	} while (sum<=100);
	printf("会計=%d", sum);
	return 0;
}