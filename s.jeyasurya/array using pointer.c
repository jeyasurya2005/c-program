#include<stdio.h>
int main()
{
    int a[10]={5,1,2,33,4,5},i,max=a[0];
    for(i=1;i<10;i++)
    {
        if(max<a[i])
        {
        max=a[i];
     }
    }
       printf("%d\n",max);
    
    return 0;
}