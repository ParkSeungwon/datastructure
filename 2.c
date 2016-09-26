#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sort(int* a, int* b) {
	if(*a > *b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;
		return 1;
	}
	return 0;
}

int main() {
	int* p = calloc(10, sizeof(int));
	
	srand(time(NULL));
	for(int i=0; i<10; i++) p[i] = rand() % 100;
	
	printf("정렬전 배열값 \n");
	for(int i=0; i<10; i++) printf("%d ", p[i]);

	printf("\n정렬후 배열값 \n");

	int sorted = 0;
	while(!sorted) {
		sorted = 1;
		for(int i=0; i<9; i++) if(sort(p+i, p+i+1)) sorted = 0;
	}

	for(int i=0; i<10; i++) printf("%d ", p[i]);
	free(p);
}

