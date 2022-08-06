//for문 연습 : 구구단 출력(두가지 방향)

#include<stdio.h>

int main(void) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++)
			printf("%d * %d = %d\n",i,j,i*j);
		printf("\n");
	}
	//역순
	for (int i = 9; i >= 1; i--) {
		for (int j = 9; j >= 1; j--)
			printf("%d * %d = %d\n", i, j, i * j);
		printf("\n");
	}

	return 0;

}