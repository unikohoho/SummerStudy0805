//반복문 연습 : while문

#include<stdio.h>

int main(void) {
	int i = 1, sum = 0;
	
	while (i <= 10) {
		sum += i;
		printf("1 ~ %2d까지의 합 : %2d\n", i, sum);
		i++;
	}
	printf("1 ~ 10까지의 합 : %d\n", sum);

	return 0;

}