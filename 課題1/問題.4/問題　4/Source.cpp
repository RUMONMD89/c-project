#include<stdio.h>
int main(void) {
	int bango, getsu, nichi, addition,sho, amari;
	printf("�w�Дԍ��́H�@");
	scanf_s("%d", &bango);
	printf("�a����\n");
	printf("�����H�@");
	scanf_s("%d", &getsu);
	printf("�����H�@");
	scanf_s("%d", &nichi);
	addition = getsu + nichi;
	sho = (int)bango / addition;
	amari = bango % addition;
	printf("%d��%d�Ŋ����\n", bango, addition);
	printf("����%d�ŗ]�肪%d\n", sho, amari);
	return 0;
}
