//do~while�� ���� : ������ ���(�ܼ� �����ϱ�)

#include<stdio.h>

int main(void) {
	int dan;
	int i = 1;
	do {
		printf("�� �Է� : ");
		scanf("%d", &dan);
	} while (dan < 1 || dan>9);

	do {
		printf("%2d * %2d = %2d\n", dan,i,dan*i );
		i++;

	} while (i <= 9);

	return 0;

}