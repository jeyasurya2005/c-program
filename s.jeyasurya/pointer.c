#include<stdio.h>
int main()
{
    int m=10;
    int*p;
    int **z;
    int ***x;
    p=&m;
    z=&p;
    x=&z;
    printf("%d",p);
    printf("%d",**z);
    printf("%d",***x);
    return 0;
}
