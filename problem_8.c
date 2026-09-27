#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("enter a and b :");
    scanf("%d %d", &a , &b);
    c = a + b ;
    a = c - a ;
    b = c - b ;
    printf("after awapping: a=%d , b=%d\t", a , b );
    return 0 ;


}