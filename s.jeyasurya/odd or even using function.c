#include <stdio.h>

int main() {
    int a, years, weeks, days;
    
    printf("Proddatur name Dharaani\n");
    printf("Enter the num=");
    scanf("%d", &a);
    
    years = a/ 365;          
    a = a % 365;
    weeks =a/ 7;             
    days = a % 7;               
    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    
    return 0;
}
