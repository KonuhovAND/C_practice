#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	float result = (a + b + c);
	printf("%.4f",result/3);
	return 0;
}