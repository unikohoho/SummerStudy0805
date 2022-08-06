//continue문 활용 : 369게임 1-20까지

#include<stdio.h>

int main(void) {
	
	for (int i = 1; i <= 20; i++) {
		
		if (i % 3 == 0) {
			printf("짝 ");
			continue;

		}
		printf("%d ",i);
	}

	return 0;

}