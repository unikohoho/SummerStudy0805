//for문 연습 : 사용자로부터 x,y를 입력 받아 x에서y까지의 합을 구하는 프로그램

#include<stdio.h>

int main(void) {
	int x, y;
	int sum = 0;

	printf("더하고싶은 범위를 입력해주세요[x,y] : ");
	scanf("%d%d", &x, &y);

	for (int i = x; i <= y; i++)
		sum += i;

	printf("%d에서 %d까지의 합 : %d\n",x,y,sum);

	return 0;

}