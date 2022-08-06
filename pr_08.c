//for문 연습 : 사용자가 입력한 정수의 모든 약수를 출력하는 프로그램

#include<stdio.h>

int main(void) {
	int input;

	printf("약수가 궁금한 정수를 입력해주세요 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (input % i == 0)
			printf("%d는 %d의 약수입니다.\n",i,input);
	}
	return 0;

}