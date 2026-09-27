#include<stdio.h>
int main()
{
    double r , area , circumference ;
    printf("enter r:");
    scanf("%lf", &r );
    area = 3.1416 * r * r ;
    circumference = 2 * 3.1416 * r ;
    printf("area = %.3lf\n", area);
    printf("circumference = %.3lf\n", circumference);
    return 0 ;


}