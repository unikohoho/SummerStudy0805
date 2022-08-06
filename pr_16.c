//보조제어문 연습 : break문

#include<stdio.h>

int main(void) {
	int num, sum = 0;
	while (1) {
		printf("양수 입력 : ");
		scanf("%d", &num);

		if (num == 0)
			break;
		
		sum += num;
	}

	printf("합계 : %d\n", sum);

	return 0;

}