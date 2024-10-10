#include<stdio.h>
int main()
{
    int a,b,*p,*q,c;
    printf("enter the number a=");
    scanf("\n %d",&a);
    printf("enter the number b=");
    scanf("\n %d",&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("%d",c);
    return 0;
}