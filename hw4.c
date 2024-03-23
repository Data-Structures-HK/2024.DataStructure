#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>



int main(void) {
	char ch[2][3][100];
	char c[3][20] = { "이름","학과","학번" };

	for (int k = 0; k < 2; k++) {
		if (k == 0) {
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 3; j++) {
					printf("학생 %d의 %s : ", i + 1, c[j]);
					fgets(ch[i][j], sizeof(ch[i][j]), stdin);
				}
				printf("\n");
			}
		}
		else if (k == 1) {
			for (int i = 0; i < 2; i++) {
				printf("학생 %d\n", i + 1);
				for (int j = 0; j < 3; j++) {
					printf("\t %s\n", ch[i][j]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}

