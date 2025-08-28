#include <stdio.h>
int main(){
    int a, b, c, x;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c); 
    int disc = b*b - 4*a*c;
    if (disc < 0) {
        printf("No Real Roots\n");
    } else if (disc == 0) {
        printf("One Real Root");
    } else {
        printf("Two Real Roots");
    }

    
}