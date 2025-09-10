#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }

    c = a + b;
    while (c <= n) {
        if (c == n) {
            printf("%d is a Fibonacci number.\n", n);
            return 0;
        }
        a = b;
        b = c;
        c = a + b;
    }

    printf("%d is NOT a Fibonacci number.\n", n);
    return 0;
}


