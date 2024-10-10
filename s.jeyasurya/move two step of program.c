#include <stdio.h>

int main() {
    int numbers[7]; 

    for (int i = 0; i < 7; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Last : %d\n", numbers[6]--);
    
    return 0;
}
