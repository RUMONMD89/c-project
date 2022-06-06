#include<stdio.h>
int main(void) {
	double agezoko, katei, takasa, menseki;
	printf("ã’ê=");
	scanf_s("%lf",&agezoko);
	printf("‰º’ê=");
	scanf_s("%lf", &katei);
	printf("‚‚³=");
	scanf_s("%lf", &takasa);
	menseki = (agezoko + katei)*takasa/2;
	printf("–ÊÏ=   %0.2f\n",menseki);
	
	return 0;

}
