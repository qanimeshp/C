#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;
    int sum = 0;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    array = (int*)malloc(n * sizeof(int));
    
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    
   
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\nSum of array elements: %d\n", sum);
    
   
    free(array);
    
    return 0;
}