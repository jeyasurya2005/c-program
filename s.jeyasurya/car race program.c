
#include <stdio.h>
int main() {
    int roadA, roadB, roadC, cars;

    printf("Enter the number for road A: ");
    scanf("%d", &roadA);
    printf("Enter the number for road B: ");
    scanf("%d", &roadB);
    printf("Enter the number for road C: ");
    scanf("%d", &roadC);
    printf("Enter the number of cars: ");
    scanf("%d", &cars);

    if (cars % roadA == 0) {
        printf("The car will travel on road A\n");
    } else if (cars % roadB == 0) {
        printf("The car will travel on road B\n");
    } else if (cars % roadC == 0) {
        printf("The car will travel on road C\n");
    } else {
        printf("No path exists\n");
    }

    return 0;
}

