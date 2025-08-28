#include <stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (float)total / 5;
    if (percentage > 85){
        printf("Grade: O\n");
    } else if (percentage > 75) {
        printf("Grade: A\n");
    } else if (percentage > 50) {
        printf("Grade: B\n");
    } else if (percentage > 35) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }
}
