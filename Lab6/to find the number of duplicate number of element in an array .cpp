#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }

    printf("Number of duplicate numbers = %d\n", count);

    return 0;
}
