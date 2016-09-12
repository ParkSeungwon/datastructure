#include <stdio.h>

int main() {
	int k[10];
	for(int i=0; i<10; i++) scanf("%d", &k[i]);
	int max = k[0];
	for(int i=0; i<10; i++) if(max < k[i]) max = k[i];
	printf("Biggest num is %d\n", max);
}

