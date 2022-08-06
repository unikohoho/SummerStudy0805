//do~while문 연습 : 구구단 출력

#include<stdio.h>

int main(void) {
	int dan;

	printf("단 입력 : ");
	scanf("%d", &dan);

	int i = 1;

	do {
		printf("%2d * %2d = %2d\n", dan, i, dan * i);
		i++;

	} while (i <= 9);

	return 0;

}