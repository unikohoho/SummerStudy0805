//반복문 연습 : for문

#include<stdio.h>

int main(void) {
	int sum = 0;
	int sum2 = 0;

	for (int i = 0; i < 10; i++) {
		sum += i;
	}
	printf("1부터 10까지의 합은 %d입니다.\n", sum);

	for (int j = 1; j < 11; j++) {
		sum2 += j;
		printf("(1~%2d까지의 합 = %d)\n", j, sum2);

	}
}