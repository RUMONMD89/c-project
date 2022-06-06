#include<stdio.h>;
int main(void) {
	int a, b, multiplication;
	printf("aは　いくつ？ ");
	scanf_s("%d", &a);
	printf("bは　いくつ？ ");
	scanf_s("%d", &b);
	multiplication = a * b;
	printf("%d*%dは%dです", a, b, multiplication);
	return 0;
}