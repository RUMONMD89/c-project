#include<stdio.h>
int main(void) {
	int sum, n;
	
	sum = 0;
	do
	{
		printf("2���̐�������͂��Ă��������@");
		scanf_s("%d", &n);
		sum = n + sum;

	} while (sum<=100);
	printf("��v=%d", sum);
	return 0;
}