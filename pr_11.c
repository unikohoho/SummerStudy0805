//���ǹ� ���� : while��

#include<stdio.h>

int main(void) {
	int dan;
	int i = 1;

	printf("�� �Է� : ");
	scanf("%d", &dan);

	while (i <= 9) {
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;

}