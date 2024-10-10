#include <stdio.h>
struct std {
    int age;
    float weight;
};

int main() {
    struct std person_1; 
    struct std*ptr=&person_1;
    printf("Enter the age: ");
    scanf("%d",&ptr->age); 
    printf("Enter the weight: ");
    scanf("%f", &ptr->weight);
    printf("You entered:\n");
    printf("Age: %d\n", ptr->age);
    printf("Weight: %f\n", ptr->weight);

    return 0;
}
