//중첩 반복문 연습 :  사용자가 0을 입력하기 전까지 단을 입력받아 구구단 출력 프루ㅗ그램

#include<stdio.h>

int main(void) {
	int dan;

	while (1) {
		printf("단 입력 : ");
		scanf("%d", &dan);

		if (dan == 0)
			break;

		for (int i = 1; i <= 9; i++)
			printf("%2d * %2d = %2d\n", dan, i, dan * i);

	}
