#include <stdio.h>

int main() {
    int arr[] = {6,6,8,7,9,9,10,11,12,12,21,3,4,5,9,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements are:\n");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
