#include <stdio.h>
int square(int x) 
{ 
    int z; 
    z=x*x; 
    return z; 
} 
int main() 
{ 
    int a=4,c; 
    printf("enter the num:");
    scanf("%d",&a);
    c=square(a);
    printf("the square%d=%d\t",a,c);
    return 0; 
}