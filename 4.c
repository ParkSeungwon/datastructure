#include <stdio.h>

int main(void)
{
	char ar[100];
	gets(ar);
	int i = 0;
	while(ar[i] != '\0') {
		if(ar[i] != ' ') putchar(ar[i]);
		i++;
	}
	return 0;
}
