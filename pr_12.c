//���ǹ� ���� : do~while��

#include<stdio.h>

int main(void) {
	int sum = 0, i = 0;

	printf("1���� 10������ �� : ");

	do {
		i++;
		sum += i;
	} while (i < 10);

	printf("%d\n", sum);

	return 0;

}