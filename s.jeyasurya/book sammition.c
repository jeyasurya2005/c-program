#include<stdio.h>
int main()
{
    int a;
    printf("enter the book summition day=");
    scanf("%d",&a);
    
    if(a==5)
    {
    printf("the fain ammount is 100");
    }
    
    else if(a==6&&a<=10)
    {
    printf("the fain ammount is 200");
    }
    
    else if(a==11&&a<15)
    {
    printf("the fain ammount is 300");
    }
    
    else
    {
    printf("you have no fain");
    }
    
    return 0;
    
}