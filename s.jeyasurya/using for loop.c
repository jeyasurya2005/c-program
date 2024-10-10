































#include <stdio.h> 
int main(){
    int day;
    printf("enter the day");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        {
        printf("the day is sunday");
        break;
    }
    
        case 2:
        {
        printf("the day is monday");
        break;
    }
    
        case 3:
        {
        printf("the day is tuesday");
        break;
    }
    
        case 4:
        {
        printf("the day is wednesday");
        break;
    }
    {
        case 5:
        printf("the day is thurs day");
        break;
    }
    {
        case 6:
        printf("the day is friday");
        break;
    }
    
        case 7:
        {
        printf("the day is saturday");
        break;
    }
        deafault:
        {
        printf("have a nice day");
        break;
        }
              
        
    
}
}



















#include<stdio.h>
int main()
{
    int i;
    i=1;
    for(i=1;i<10;i++)
    {
        printf("%d",i);
        
    }
}