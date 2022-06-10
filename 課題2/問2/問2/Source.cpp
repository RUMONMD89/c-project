#include<stdio.h>
int main(void) {
	int sum, n;
	
	sum = 0;
	do
	{
		printf("2Œ…‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢@");
		scanf_s("%d", &n);
		sum = n + sum;

	} while (sum<=100);
	printf("‰ïŒv=%d", sum);
	return 0;
}