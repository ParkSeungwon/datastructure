#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int** gen()
{
	srand(time(NULL));
	int **p = (int**)malloc(sizeof(int*) * 10);
	for(int i=0; i<10; i++) {
		*(p+i) = (int*)malloc(sizeof(int) * 10);
		for(int j=0; j<10; j++) *(*(p+i)+j) = rand()%2;
	}
	return p;
}

int row(int** p)
{
	int max = 0;
	int continuous = 0;
	for(int i=0; i<10; i++) {
		continuous = 0;
		for(int j=0; j<10; j++) {
			if(*(*(p+i)+j) == 0) {
				continuous++;
				if(max < continuous) max = continuous;
			} else continuous = 0;
		}
	}
	return max;
}

int column(int** p)
{
	int max = 0;
	int continuous = 0;
	for(int j=0; j<10; j++) {
		continuous = 0;
		for(int i=0; i<10; i++) {
			if(*(*(p+i)+j)) {
				continuous++;
				if(max < continuous) max = continuous;
			} else continuous = 0;
		}
	}
	return max;
}

int main() {
	int **ar = gen(ar);
	
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) printf("%d ", *(*(ar+i)+j));
		printf("\n");
	}

	printf("row에서 연속된 최대 0의 개수는 %d개\n", row(ar)); 
	printf("column에서 연속된 최대 1의 개수는 %d개\n", column(ar)); 
	for(int i=0; i<10; i++) free(*(ar + i));
	free(ar);
}
