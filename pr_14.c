//do~while�� ���� : ������ ���

#include<stdio.h>

int main(void) {
	int dan;

	printf("�� �Է� : ");
	scanf("%d", &dan);

	int i = 1;

	do {
		printf("%2d * %2d = %2d\n", dan, i, dan * i);
		i++;

	} while (i <= 9);

	return 0;

}