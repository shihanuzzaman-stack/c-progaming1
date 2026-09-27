#include<stdio.h>
int main()
{
    float ci , p , r , t , am ;
    printf("enter p , r , t ");
    scanf("%f%f%f", &p , &r , &t);
    am = p * pow (( 1 + (r/100)) , t);
    ci = am - p ;
    printf(" compound interest = %.5f\n", ci);
    return 0 ; 




}