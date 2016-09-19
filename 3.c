#include <stdio.h>
struct Person {
	int age;
	char name[20];
	char sex[4];
	char in[20];
	char goodat[20];
	char nick[20];
	int birth[2];
};

int main() {
	struct Person I = {45, "박승원", "남", "동국대학교", "검도", "별무", {7, 29}};

	printf("나이 : %d\n이름 : %s\n성별: %s\n소속: %s\n특기: %s\n별명 : %s\n생일 : %d월 %d일\n", I.age, I.name, I.sex, I.in, I.goodat, I.nick, I.birth[0], I.birth[1]);
}

