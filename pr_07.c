//for�� ���� : ����ڷκ��� x,y�� �Է� �޾� x����y������ ���� ���ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int x, y;
	int sum = 0;

	printf("���ϰ���� ������ �Է����ּ���[x,y] : ");
	scanf("%d%d", &x, &y);

	for (int i = x; i <= y; i++)
		sum += i;

	printf("%d���� %d������ �� : %d\n",x,y,sum);

	return 0;

}