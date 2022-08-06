//중첩 반복문 연습 : 주사위 2개를 던져서 나올 수 있는 모든 경우의 수를 출력하는 프로그램

#include<stdio.h>

int main(void) {

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			printf("(%d , %d) ",i,j);
		}
		printf("\n");

	}
	return 0;

}
