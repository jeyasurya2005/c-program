#include <stdio.h>
#include <math.h>

int main() {
    float value;

    
    printf("Enter a float value: ");
    scanf("%f", &value);

    float ceilValue = ceil(value);
    float floorValue = floor(value);

    printf("You entered: %.2f\n", value);
    printf("Ceil value: %.2f\n", ceilValue);
    printf("Floor value: %.2f\n", floorValue);

    return 0;
}