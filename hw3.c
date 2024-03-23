# include <stdio.h>

int main(void) {


	int cnt = 1;
	int arr[2][3][4];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				arr[i][j][k] = cnt;
				cnt++;
				printf("array[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}

	return 0;
}