#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char string[64];
	int length = 0;

	printf("문자열을 입력하세요: ");
	gets(string, 64);
	printf("\n");
	printf("입력된 문자열은 \n\"%s\" \n입니다. \n", string);
	printf("\n");

	while (string[length] != 0) length++;


	printf("입력된 문자열의 길이 = %d \n", length);

	return 0;
}
