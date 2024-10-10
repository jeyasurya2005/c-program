#include <stdio.h>
void des(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void desa(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11,17,19,21,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    desa(arr, n);

    des(arr, n);

    printf("Sdescendig: \n");
    desa(arr, n);

    return 0;
}