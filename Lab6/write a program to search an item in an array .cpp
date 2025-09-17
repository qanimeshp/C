#include <stdio.h>

int main() {
    int arr[] = {1,2,2,3,8,9,4,5,4,6,7,8,1,9,10,14,15,11,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int item, found = 0;
    printf("Enter the item to search: ");
    scanf("%d", &item);

    for (int i = 0; i < n; i++) {
        if (arr[i] == item) {
            printf("Found at position %d\n", i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("Item %d not found in the array\n", item);
    }

    return 0;
}
