//�ݺ��� ���� : for�� {1���� 10������ ¦��/Ȧ���� �� ����ϴ� ���α׷�}

#include<stdio.h>

int main(void) {
	int i, j;
	int e_sum = 0;
	int o_sum = 0;
	int sum = 0;

	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			e_sum += i;
		else
			o_sum += i;
		sum += i;

	}
	printf("¦���� ���� %d�Դϴ�.\n", e_sum);
	printf("Ȧ���� ���� %d�Դϴ�.\n", o_sum);
	printf("��ü�� ���� %d�Դϴ�.\n", sum);

	return 0;

}