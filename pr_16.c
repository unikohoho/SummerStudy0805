//������� ���� : break��

#include<stdio.h>

int main(void) {
	int num, sum = 0;
	while (1) {
		printf("��� �Է� : ");
		scanf("%d", &num);

		if (num == 0)
			break;
		
		sum += num;
	}

	printf("�հ� : %d\n", sum);

	return 0;

}