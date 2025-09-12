// нужно только один main
// нужно для каждый задачи один проект
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int notmain()
{
	int a; 
	float b, r1, r2;
	// ...;
	setlocale(0, "");
	printf("Enter 2 numbers: \n");
	scanf("%d%f", &a, &b);
	
	r1 = a / b;
	//r1 = 2;

	//r2 = a % b; works only with ints
	// r2 = 1
	// %.2f = 5.45(no more)
	// %10.2f = '<--5-->5.46<--5-->'

	printf("%d/%.2f = %.2f\n", a, b, r1);
	//printf("%d : %d = %d\n", a, b, r2);
	return 0;
}