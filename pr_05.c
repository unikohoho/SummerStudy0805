//for�� ���� : 1���� ����ڰ� �Է��� ���� �߿��� 3�ǹ���̸鼭 ���ÿ� 5�� ����� ���ڸ� ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	 
	int input;

	printf("���� �Է� : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			printf("3�� 5�� ����� : %d\n",i);
	}

	return 0;

}