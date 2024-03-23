#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int n) {
	int val;
	if (n <= 1) {
		printf("fact(1) 함수 호출!\n");
		printf("fact(1) 값 1 반환!\n");
		return 1;
	}
	else {
		printf("fact(%d) 함수 호출!\n", n);
		val = (n * fact(n - 1));
		printf("fact(%d) 값 %d 반환!\n", n, val);
		return val;
	}
}


int main(void) {
	int num;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	printf("\n\n%d의 팩토리얼 값은 %ld입니다.\n", num, fact(num));
	return 0;
}