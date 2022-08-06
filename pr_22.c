//중첩 반복문 연습 : 다양한 피라미드 만들기

#include<stdio.h>

int main(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");

	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

	return 0;

}