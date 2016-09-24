#include <stdio.h>
#include <stdlib.h>

struct grade {
	int data_structure;
	int system_software;
	int basic_programming;
	int creative_engineering;
} middle, *end;

int main(void)
{
	end = (struct grade*)malloc(sizeof(struct grade));
	printf("자료구조, 시스템소프트웨어, 기초프로그래밍, 창의적 공학설계의 중간 점수를 입력하시오.");
	scanf("%d", &middle.data_structure);
	scanf("%d", &middle.system_software);
	scanf("%d", &middle.basic_programming);
	scanf("%d", &middle.creative_engineering);
	printf("자료구조, 시스템소프트웨어, 기초프로그래밍, 창의적 공학설계의 기말 점수를 입력하시오.");
	scanf("%d", &(end->data_structure));
	scanf("%d", &(end->system_software));
	scanf("%d", &(end->basic_programming));
	scanf("%d", &(end->creative_engineering));
	printf("중간과 기말의 합은 다음과 같습니다.\n");
	printf("자료구조 : %d\n시스템소프트웨어 : %d\n기초프로그래밍 : %d\n창의적 공학설계: %d\n", 
			middle.data_structure + end->data_structure, 
			middle.system_software + end->system_software, 
			middle.basic_programming + end->basic_programming, 
			middle.creative_engineering + end->creative_engineering);
	free(end);
}
