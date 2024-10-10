#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;
    printf("\n enter the element=");
    scanf("%d",&n);
    p=(int*)malloc (n*sizeof(int));
    if (p==NULL)
    {
        printf("memory is not create");
    }
    else
    {
        printf("memory is  create by malloc()");
        for(i=0;i<n;i++)
        {
            p[i]=i+1;
        }
        printf("the element are");
        for(i=0;i<n;i++)
        {
            printf("%d",p[i]);
        }
        return 0;
        
        }
            
}
