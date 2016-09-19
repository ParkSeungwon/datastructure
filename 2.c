#include <stdio.h>

int main() {
	float mat1[2][3] = {{4.2, 4.3, 3.8}, {3.7, 1.5, 0.7}};
	float mat2[3][2] = {{5.2, 2.1}, {3.2, 1.4}, {1.5, 3.6}};

	for(int y=0; y<2; y++) {
		for(int x=0; x<3; x++)  printf("%.2lf ", mat1[y][x]);
		printf("\n");
	}

	printf("\n");

	for(int y=0; y<3; y++) {
		for(int x=0; x<2; x++)  printf("%.2lf ", mat2[y][x]);
		printf("\n");
	}

	printf("\n두 행렬을 곱한 결과입니다.\n");
	float sum = 0;
	for(int i=0; i<3; i++) sum += mat1[0][i] * mat2[i][0];
	printf("%.2lf ", sum);
	sum = 0;
	for(int i=0; i<3; i++) sum += mat1[0][i] * mat2[i][1];
	printf("%.2lf\n", sum);
	sum = 0;
	for(int i=0; i<3; i++) sum += mat1[1][i] * mat2[i][0];
	printf("%.2lf ", sum);
	sum = 0;
	for(int i=0; i<3; i++) sum += mat1[1][i] * mat2[i][1];
	printf("%.2lf\n", sum);
}

