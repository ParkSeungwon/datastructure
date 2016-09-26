#include <stdio.h>

struct Grade {
	int datastructure, algorithm;
} gr = {90, 100};

void swap(struct Grade* p) {
	int tmp = p->datastructure;
	p->datastructure = p->algorithm;
	p->algorithm = tmp;
}

void show(struct Grade* p) {
	printf("Data Structure = %d, algorithm = %d\n", p->datastructure, p->algorithm);
}

int main()
{
	struct Grade* p = &gr;
	show(p);
	swap(p);
	show(p);
}


