//do~while�� Ȱ�� : �޴� ȭ�� ����ϱ�

#include<stdio.h>

int main(void) {

	int input;

	do {
		printf("1 -- ���� �����\n");
		printf("2 -- ����\n");
		printf("3 -- ������\n");
		printf("=================\n");

		printf("�޴� ���� : ");
		scanf("%d", &input);

	} while (input != 1 && input != 2 && input != 3);

	printf("����ڰ� ������ �޴� = %d\n", input);

	return 0;

}