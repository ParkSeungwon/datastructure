#define print(a) ( 2*4 + 6/(a))
#include <stdio.h>

int main()
{
	printf("a의 값을 입력하세요.");
	int a;
	scanf("%d", &a);
	printf("2*4 + 6/a =%d", print(a));
}
