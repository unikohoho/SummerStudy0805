//��ø �ݺ��� ���� :  ����ڰ� 0�� �Է��ϱ� ������ ���� �Է¹޾� ������ ��� ����Ǳ׷�

#include<stdio.h>

int main(void) {
	int dan;

	while (1) {
		printf("�� �Է� : ");
		scanf("%d", &dan);

		if (dan == 0)
			break;

		for (int i = 1; i <= 9; i++)
			printf("%2d * %2d = %2d\n", dan, i, dan * i);

	}
