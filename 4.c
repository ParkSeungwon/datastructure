#include <stdio.h>
#include <stdlib.h>

typedef struct Person_data {
	char name[20];
	int age;
	char addr[30];
} Person; 

int main(void)
{
	Person* p = (Person*)malloc(sizeof(Person));

	printf("이름, 나이, 주소를 입력하시오.");
	scanf("%s", (p->name));
	scanf("%d", &(p->age));
	scanf("%s", (p->addr));
	printf("이름 : %s\n나이 : %d\n주소 : %s\n", p->name, p->age, p->addr );
	free(p);
}
