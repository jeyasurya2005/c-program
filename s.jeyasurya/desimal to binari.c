#include <stdio.h>
void dtob(int n) {
    
    int binary[32]; 
    int i = 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2; 
        n = n / 2;         
        i++;
    }printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    dtob(dec);


    return 0;
}
