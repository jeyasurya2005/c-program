#include <stdio.h>
struct std 
{
    char name[10];
    int rollno;
};
int main()
{
    struct std s1; 
    printf("Enter name= ");
    scanf("%s", s1.name); 
    printf("Enter roll number= ");
    scanf("%d", &s1.rollno);
    printf("Name= %s\n", s1.name);
    printf("Roll Number= %d\n", s1.rollno);
    return 0;
}