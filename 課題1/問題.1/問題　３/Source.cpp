#include<stdio.h>
int main(void) {
	double agezoko, katei, takasa, menseki;
	printf("���=");
	scanf_s("%lf",&agezoko);
	printf("����=");
	scanf_s("%lf", &katei);
	printf("����=");
	scanf_s("%lf", &takasa);
	menseki = (agezoko + katei)*takasa/2;
	printf("�ʐ�=   %0.2f\n",menseki);
	
	return 0;

}
