#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (num&1) 
    {
        printf("The least significant bit is 1\n");
    }
    else 
    {
        printf("The least significant bit is 0\n");
    }

    return 0;
}
