#include<stdio.h>
int main(void) {
	int bango, getsu, nichi, addition,sho, amari;
	printf("学籍番号は？　");
	scanf_s("%d", &bango);
	printf("誕生日\n");
	printf("何月？　");
	scanf_s("%d", &getsu);
	printf("何日？　");
	scanf_s("%d", &nichi);
	addition = getsu + nichi;
	sho = (int)bango / addition;
	amari = bango % addition;
	printf("%dを%dで割ると\n", bango, addition);
	printf("商が%dで余りが%d\n", sho, amari);
	return 0;
}
