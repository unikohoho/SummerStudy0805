//break�� ���� : �н����� ��ġ ���α׷�

#include<stdio.h>

int main(void) {
	int cnt = 0;
	int input;

	while (1) {
		printf("�н����� �Է�(����) : ");
		scanf("%d", &input);

		if (input == 2020) {
			printf("�н����� ��ġ !\n");
			break;
		}
		cnt++;

		if (cnt == 5) {
			printf("5ȸ ���� : �õ��Ұ���\n");
			break;
		}
	}
	return 0;

}