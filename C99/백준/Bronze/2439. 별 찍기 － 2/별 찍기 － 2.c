#include <stdio.h>
#include <stdlib.h>

// 예시 테스트를 위한 main 함수
int main() {
	
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++) {
		for(int k = 0; k < t - i; k++) {
			printf(" ");
		}
		
		for(int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}