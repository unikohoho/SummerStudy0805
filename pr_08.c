//for�� ���� : ����ڰ� �Է��� ������ ��� ����� ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int input;

	printf("����� �ñ��� ������ �Է����ּ��� : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (input % i == 0)
			printf("%d�� %d�� ����Դϴ�.\n",i,input);
	}
	return 0;

}