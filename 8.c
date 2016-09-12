#include <stdio.h>

float add(float a, float b) { return a+b; }
float sub(float a, float b) { return a-b; }
float mul(float a, float b) { return a*b; }
float den(float a, float b) { return a/b; }

int main()
{
	float (*pf[4])(float a, float b) = {&add, &sub, &mul, &den};
	char op[4] = {'+', '-', '*', '/'};
	int n;
	float f1, f2;
	printf("Enter number to do arithmatics. >>\n");
	printf("[add]:0, [subtract]:1, [multiply]:2, [divide]:3>>");
	fflush(stdout);
	scanf("%d", &n);
	printf("Enter 2 real numbers to do arithmatcs>>");
	fflush(stdout);
	scanf("%f %f", &f1, &f2);
	printf("%f %c %f = %f\n", f1, op[n], f2, (*pf[n])(f1, f2));
}

