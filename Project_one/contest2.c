#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int not_main1()
{
	int a;
	setlocale(0, "");
	scanf("%d", &a);
	printf("%d inch = %.2f см", a, a * 2.54);
	return 0;
}