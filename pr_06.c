//for�� ���� : ����ڷκ��� �ݺ� Ƚ���� �Է¹޾Ƽ� �� �� ��ŭ "Hello"����ϴ� ���α׷�

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