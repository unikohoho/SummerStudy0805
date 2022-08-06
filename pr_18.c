//보조제어문 연습 : continue문

#include<stdio.h>

int main(void) {
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		if (i % 3 == 0)
			continue;
		sum += i;
	}
	printf("3의 배수가 아닌 합계 ; %d\n", sum);

	return 0;

}