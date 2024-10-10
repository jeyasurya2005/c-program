#include <stdio.h>

int main() 
{
    int a = 10, b = 5;

    
    a = b;
    printf("After setting a = b: %d\n", a);

    
    a += 5;
    printf("After adding 5 to a: %d\n", a);

   
    a -= b;
    printf("After subtracting b from a: %d\n", a);

    
    a *= b;
    printf("After multiplying a by b: %d\n", a);

    
    a /= b;
    printf("After dividing a by b: %d\n", a);

    
    a <<= 1; 
    printf("After left shifting a by 1: %d\n", a);

    
    a >>= 1;
    printf("After right shifting a by 1: %d\n", a);

    
    a &= b;
    printf("After bitwise AND of a with b: %d\n", a);

   
    a |= b;
    printf("After bitwise OR of a with b: %d\n", a);

    return 0;
}
