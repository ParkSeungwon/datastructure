#include <stdio.h>
#include <stdlib.h>

typedef struct Person_data {
	char name[20];
	char sex[5];
	int age;
} Person; 

int main(void)
{
	Person person[100];
	Person* p = &person[0];
	printf("최대 100명의 사용자 정보를 입력받고 출력합니다.\n");
	int i;
	for(i=1; i<100; i++) {
		printf("%d. 이름은?", i);
		scanf("%s", p->name);
		printf("성별은?");
		scanf("%s", p->sex);
		printf("나이는?");
		scanf("%d", &(p->age));
		printf("계속 입력하려면 1, 아니면 0을 입력하세요.");
		int c;
		scanf("%d", &c);
		p++;
		if(c == 0) break;
	}

	p = &person[0];
	printf("이름 	성별	나이 \n");
	printf("========================\n");
	for(int j=0; j<i; j++, p++) printf("%s	%s	%d\n", p->name, p->sex, p->age);
	printf("========================\n");

}
