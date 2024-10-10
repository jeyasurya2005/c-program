#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, s;
    int *p, *q;


    printf("Enter the number of elements for malloc: ");
    scanf("%d", &n);
    
    p = (int*)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Memory is not created using malloc\n");
        return 1;
    } else {
        printf("Memory is created by malloc\n");
        for (i = 0; i < n; i++) {
            p[i] = i + 1;
        }
        printf("The elements are: ");
        for (i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    
    printf("Enter the number of elements for calloc: ");
    scanf("%d", &n);
    
    q = (int*)calloc(n, sizeof(int));
    if (q == NULL) {
        printf("Memory is not created using calloc\n");
        free(p);
        return 1;
    } else {
        printf("Memory is created by calloc\n");
        for (i = 0; i < n; i++) {
            q[i] = i + 1;
        }
        printf("The elements are: ");
        for (i = 0; i < n; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }

   
    printf("Enter new size for realloc: ");
    scanf("%d", &s);
    
    p = (int*)realloc(p, s * sizeof(int));
    if (p == NULL) {
        printf("Reallocation failed for p\n");
        free(q); 
        return 1;
    }
    
    q = (int*)realloc(q, s * sizeof(int));
    if (q == NULL) {
        printf("Reallocation failed for q\n");
        free(p);
        return 1;
    }

  
    free(p);
    free(q);
    
    return 0;
}
