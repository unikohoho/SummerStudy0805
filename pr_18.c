//������� ���� : continue��

#include<stdio.h>

int main(void) {
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		if (i % 3 == 0)
			continue;
		sum += i;
	}
	printf("3�� ����� �ƴ� �հ� ; %d\n", sum);

	return 0;

}