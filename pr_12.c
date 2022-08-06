//조건문 연습 : do~while문

#include<stdio.h>

int main(void) {
	int sum = 0, i = 0;

	printf("1부터 10까지의 합 : ");

	do {
		i++;
		sum += i;
	} while (i < 10);

	printf("%d\n", sum);

	return 0;

}