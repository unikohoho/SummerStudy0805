//중첩 반복문 연습 : 구구단 출력 프로그램

#include<stdio.h>

int main(void) {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			printf("%2d * %2d = %2d\n", i, j, j * j);
		printf("\n");
	}

	return 0;


}