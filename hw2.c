#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char string[64];
	int length = 0;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(string, 64);
	printf("\n");
	printf("�Էµ� ���ڿ��� \n\"%s\" \n�Դϴ�. \n", string);
	printf("\n");

	while (string[length] != 0) length++;


	printf("�Էµ� ���ڿ��� ���� = %d \n", length);

	return 0;
}
