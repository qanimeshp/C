#include <stdio.h>

int main() {
    int a,b;

   
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    
    if (a >b) {
        int temp = a;
        a = b;
        a = temp;
    }

    
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("Square of %d (even) = %d\n", i, i * i);
        } else {
            printf("Cube of %d (odd) = %d\n", i, i * i * i);
        }
    }

    return 0;
}
