//for문 연습 : 1부터 사용자가 입력한 숫자 중에서 3의배수이면서 동시에 5의 배수인 숫자를 출력하는 프로그램

#include<stdio.h>

int main(void) {
	 
	int input;

	printf("정수 입력 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			printf("3과 5의 공배수 : %d\n",i);
	}

	return 0;

}