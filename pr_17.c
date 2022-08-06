//break문 연습 : 패스워드 일치 프로그램

#include<stdio.h>

int main(void) {
	int cnt = 0;
	int input;

	while (1) {
		printf("패스워드 입력(숫자) : ");
		scanf("%d", &input);

		if (input == 2020) {
			printf("패스워드 일치 !\n");
			break;
		}
		cnt++;

		if (cnt == 5) {
			printf("5회 오류 : 시도불가능\n");
			break;
		}
	}
	return 0;

}