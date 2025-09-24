#include <stdio.h>

int main() {
    // Declare variables for length, breadth, and perimeter of three rectangles
    int l1, b1, p1;
    int l2, b2, p2;
    int l3, b3, p3;

    // --- Input for Rectangle 1 ---
    printf("Enter the length and breadth for Rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    // --- Input for Rectangle 2 ---
    printf("Enter the length and breadth for Rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    // --- Input for Rectangle 3 ---
    printf("Enter the length and breadth for Rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    // Calculate the perimeter for each rectangle
    // Perimeter formula: P = 2 * (length + breadth)
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    printf("\n--- Results ---\n");
    printf("Perimeter of Rectangle 1: %d\n", p1);
    printf("Perimeter of Rectangle 2: %d\n", p2);
    printf("Perimeter of Rectangle 3: %d\n", p3);
    printf("-----------------\n");

    // --- Core Logic using Nested Ternary Operator ---
    // This single statement checks all conditions.
    // 1. It first checks if p1 is the greatest.
    // 2. If not, it then checks if p2 is greater than p3.
    // 3. Based on these checks, it executes the correct printf statement.
    
    (p1 >= p2 && p1 >= p3) ? printf("Rectangle 1 has the highest perimeter: %d\n", p1) :
    ((p2 >= p3) ? printf("Rectangle 2 has the highest perimeter: %d\n", p2) :
                   printf("Rectangle 3 has the highest perimeter: %d\n", p3));

    return 0;
}