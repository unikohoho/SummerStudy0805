//for문 연습 : 사용자로부터 반복 횟수를 입력받아서 그 수 만큼 "Hello"출력하는 프로그램

#include<stdio.h>

int main(void){
	int times;

	printf("How many times do you want to repeat?");
	scanf("%d", &times);

	for (int i = 0; i < times; i++) {
		printf("Hello\n");

	}

	return 0;

}