//�ݺ��� ���� : while��

#include<stdio.h>

int main(void) {
	int i = 1, sum = 0;
	
	while (i <= 10) {
		sum += i;
		printf("1 ~ %2d������ �� : %2d\n", i, sum);
		i++;
	}
	printf("1 ~ 10������ �� : %d\n", sum);

	return 0;

}