#include<stdio.h>
int add(int x,int y);
int main()
{
    int a, b,c;
    a=3;
    b=3;
    c=add(a,b);
    printf("%d",c);
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
    
}
