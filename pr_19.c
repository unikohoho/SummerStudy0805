//continue�� Ȱ�� : 369���� 1-20����

#include<stdio.h>

int main(void) {
	
	for (int i = 1; i <= 20; i++) {
		
		if (i % 3 == 0) {
			printf("¦ ");
			continue;

		}
		printf("%d ",i);
	}

	return 0;

}