//반복문 연습 : for문 {1부터 10까지의 짝수/홀수의 합 출력하는 프로그램}

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
	printf("짝수의 합은 %d입니다.\n", e_sum);
	printf("홀수의 합은 %d입니다.\n", o_sum);
	printf("전체의 합은 %d입니다.\n", sum);

	return 0;

}