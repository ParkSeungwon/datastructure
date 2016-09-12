#include <stdio.h>
int main(void)
{
	int ar[3][3] = {};
	int a=0, b=0 ,c=0;
	for(int y=0; y<3; y++) {
		for(int x=0; x<3; x++) printf("%d ", ar[x][y]);
		printf("\n");
	}
	while(a != -1) {
		printf(" Enter line, column, new value: ");
		scanf("%d %d %d", &a, &b, &c);
		ar[a-1][b-1] = c;
		for(int y=0; y<3; y++) {
			for(int x=0; x<3; x++) printf("%d ", ar[x][y]);
			printf("\n");
		}
	}
	return 0;
}
