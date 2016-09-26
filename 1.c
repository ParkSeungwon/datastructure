#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int n;

	printf("입력할 영문자의 개수를 입력 >> ");
	scanf("%d", &n);

	char* p = (char*)calloc(n, sizeof(char));
	printf("%d개의 영문자 입력 >> ", n);
	scanf("%s", p);
	printf("%s\n", p);
	free(p);
}

