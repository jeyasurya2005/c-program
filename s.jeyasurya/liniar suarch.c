#include <stdio.h>

int main() {
    int a[50], n, i, data, found = 0;

  
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &data);

    
    for (i = 0; i < n; i++) 
    {
        if (a[i] == data) 
        {
            printf("The element is found at index: %d\n", i);
            found = 1;
        }
    }

    
    if (found == 0) {
        printf("The element not found\n");
    }

    return 0;
}
