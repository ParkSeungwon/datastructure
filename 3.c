#include <stdio.h>

int main() {
	char ar[100];
	scanf("%s", ar);
	int i=0;
	while(ar[i++] != '\0');
	printf("length is %d\n", i);
}

