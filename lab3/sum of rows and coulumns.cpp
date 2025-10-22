#include <stdio.h>

int main() {
    int a[3][3], i, j, rsum, csum;

    
    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    printf("\nRow sums:\n");
    for(i = 0; i < 3; i++) {
        rsum = 0;
        for(j = 0; j < 3; j++) {
            rsum += a[i][j];
        }
        printf("Row %d = %d\n", i+1, rsum);
    }

    
    printf("\nColumn sums:\n");
    for(j = 0; j < 3; j++) {
        csum = 0;
        for(i = 0; i < 3; i++) {
            csum += a[i][j];
        }
        printf("Column %d = %d\n", j+1, csum);
    }

    return 0;
}
