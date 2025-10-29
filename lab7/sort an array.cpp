#include <stdio.h>


void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n ; i++) {
        for (j = i+1; j < n ; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, n);

    sortArray(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
