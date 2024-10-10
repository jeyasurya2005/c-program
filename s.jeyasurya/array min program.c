#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},i,min=a[0];
    for(i=1;i<5;i++)
    {
        if(min>a[i])
        {
        min=a[i];
     }
    }
       printf("%d\n",min);
    
    return 0;
}