#include <stdio.h>
int main() 
{
    enum days { sun,mon,tue,wed,thur,fri,sat };
    enum days d;
    d=fri;    
    printf("%d",d); 
    return 0;  
}
