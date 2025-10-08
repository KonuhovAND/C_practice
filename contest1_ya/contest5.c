#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	scanf("%d", &a);
	int first_n = a / 100;
	int second_n = a / 10 - 10 * (a / 100);
	int third_n = a%10;
	printf("%d\n", first_n + second_n + third_n);
	printf("%d%d%d", third_n, second_n, first_n);
	return 0;
}