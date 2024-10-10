#include <stdio.h>
int sum(int n) 
{
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int result = sum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);
    return 0;
}

