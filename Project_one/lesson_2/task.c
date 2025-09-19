#define _CRT_SECURE_NO_WARNINGS
// макро определение
#define INCH 2.54 
#include <stdio.h>
#include <locale.h>



// int main(){
//     int a;
//     scanf("%d",&a);
//     float r = a * INCH;
//     printf("%.2f",r);
//     return 0;
// }

// Условный оператор
int main(){
    int a;
    float b,r1,r2;
    r1 = 10; r2 = 10;
    setlocale(0,"");
    scanf("%d%f",&a,&b);

    // bad example, deep diving in that radit hole 
    // if (a > b)
    //     printf("%d > %d",a,b);
    // else
    //     if (a < b)
    //         printf("%d<%d",a,b);
    //         else
    //             printf('%d = %d',a,b);

    if (a > b)
        {
        printf("%d > %.2f",a,b);
        return 0;
        }
    if (a < b)
        {
        printf("%d<%.2f",a,b);
        return 0;
        }
    if (a == b)
        {
        printf("%d = %.2f",a,b);
        return 0;
        }
    return 0;
}