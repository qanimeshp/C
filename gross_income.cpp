#include <stdio.h>
int main(){
    printf("Enter Your Salary:\n");
    int sal;
    scanf("%d", &sal);
    int DA,HRA,IN,GROSS,IT;
    DA = (sal * 10) / 100; 
    HRA = (sal * 20) / 100;
    IN = (sal * 5) / 100;
    GROSS = sal + DA + HRA + IN;
    IT = (GROSS * 10) / 100;
    GROSS = GROSS - IT;
    printf("Gross Income: %d\n", GROSS);
    printf("Deductions: %d\n", IT);
    return 0;

}