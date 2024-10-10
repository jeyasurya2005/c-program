#include<stdio.h>
int main()
{
    int length,breadth;
    
    printf("enter the length=");
    scanf("%d",&length);
    printf("enter the breadth=");
    scanf("%d",&breadth);
    printf("the total area is =%d",length*breadth);
    printf("\n the circum ference is=%d",2*(length+breadth));
    return 0;
    
    
    
}