#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number a=");
    scanf("\n %d",&a);
    printf("enter the number b=");
    scanf("\n %d",&b);
    printf("a value is %d\n",b);
    printf("b value is %d\n",a);
    return 0;
    
    int swap(int*x,int*y)
    {
        int z;
        z=*x;
        *x=*y;
        *y=z;
        return z;
    }
}