#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},i,max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        {
        max=a[i];
     }
    }
       printf("%d\n",max);
    
    return 0;
}