#include<stdio.h>
int main()
{
    double celsius , fahrenheit ;
    printf ("enter celsius:");
    scanf("%lf", &celsius);
    fahrenheit = ((celsius*9)/5)+32 ;
    printf("fahrenheit = %.3lf\n", fahrenheit);
    return 0 ;
}