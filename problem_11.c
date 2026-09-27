#include<stdio.h>
int main()
    {
        double celsius , fahrenheit ;
        printf("enter fahrenheit :");
        scanf("%lf", &fahrenheit );
        celsius = (fahrenheit-32)*5/9 ;
        printf("celsius = %.3lf\n", celsius);
        return 0 ;


    }