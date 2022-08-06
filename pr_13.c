//do~while문 활용 : 메뉴 화면 출력하기

#include<stdio.h>

int main(void) {

	int input;

	do {
		printf("1 -- 새로 만들기\n");
		printf("2 -- 열기\n");
		printf("3 -- 끝내기\n");
		printf("=================\n");

		printf("메뉴 선택 : ");
		scanf("%d", &input);

	} while (input != 1 && input != 2 && input != 3);

	printf("사용자가 선택한 메뉴 = %d\n", input);

	return 0;

}