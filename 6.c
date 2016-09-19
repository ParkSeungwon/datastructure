#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *i = (int*)malloc(sizeof(int));
	*i = 3;
	printf("%d\n", *i);
	free(i);
}
