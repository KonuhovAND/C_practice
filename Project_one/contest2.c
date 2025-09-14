#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int a;
	setlocale(0, "");
	scanf("%d", &a);
	printf("%d inch = %.2f ��", a, a * 2.54);
	return 0;
}