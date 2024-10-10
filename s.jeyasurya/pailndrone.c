/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    if(temp==sum)
    printf("pailndrone ");
    else
    {
    printf(" not palindrane ");
    }
    return 0;
}

    