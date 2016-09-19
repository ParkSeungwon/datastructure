#include <stdio.h>
struct Point {
	int x,y;
};

int equal(struct Point p1, struct Point p2) {
	if(p1.x == p2.x && p1.y == p2.y) return 1;
	else return 0;
}

int quadrant(struct Point p) {
	if(p.x > 0) {
		if(p.y > 0) return 1;
		else return 4;
	} else {
		if(p.y > 0) return 2;
		else return 3;
	}
	return 0;
}

int main(void)
{
	int x, y;
	struct Point p1, p2;
	printf("첫번째 점의 좌표를 입력하세요 : ");
	scanf("%d", &x);
	scanf("%d", &y);
	p1.x = x;
	p1.y = y;
	printf("두번째 점의 좌표를 입력하세요 : ");
	scanf("%d", &x);
	scanf("%d", &y);
	p2.x = x;
	p2.y = y;
	printf("%d\n", equal(p1, p2));

	printf("좌표를 입력 :");
	scanf("%d", &x);
	scanf("%d", &y);
	struct Point p;
	p.x = x;
	p.y = y;
	printf("%d사분면\n", quadrant(p));
}
