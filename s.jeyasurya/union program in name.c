#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[30];
};
int main(){
    union student s1;
    s1. rollno=101;
    strcpy(s1.name,"raja");
    printf("%d",s1.rollno);
    printf("\n%s",s1.name);
    return 0;
}