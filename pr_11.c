//조건문 연습 : while문

#include<stdio.h>

int main(void) {
	int dan;
	int i = 1;

	printf("단 입력 : ");
	scanf("%d", &dan);

	while (i <= 9) {
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;

}