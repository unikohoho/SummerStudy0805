//�ݺ��� ���� : for��

#include<stdio.h>

int main(void) {
	int sum = 0;
	int sum2 = 0;

	for (int i = 0; i < 10; i++) {
		sum += i;
	}
	printf("1���� 10������ ���� %d�Դϴ�.\n", sum);

	for (int j = 1; j < 11; j++) {
		sum2 += j;
		printf("(1~%2d������ �� = %d)\n", j, sum2);

	}
}