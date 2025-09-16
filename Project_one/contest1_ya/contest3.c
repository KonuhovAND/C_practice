#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int not_1main() {
	int a;
	setlocale(0, "");
	scanf("%d", &a);
	printf("Первая цифра -> %d\nПоследняя цифра -> %d",a/100,a%10);
}