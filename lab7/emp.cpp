#include <stdio.h>


struct Employee {
    int ID;
    char name[50];
    float basicPay;
    float DA;      
    float HRA;  
    float grossSalary;
};


void calculateSalary(struct Employee *e) {
    e->DA = 0.1 * e->basicPay;   
    e->HRA = 0.05 * e->basicPay;
    e->grossSalary = e->basicPay + e->DA + e->HRA;

}


void inputEmployee(struct Employee *e) {
    printf("Enter Employee ID: ");
    scanf("%d", &e->ID);

    printf("Enter Employee Name: ");
    scanf(" %s", e->name);

    printf("Enter Basic Pay: ");
    scanf("%f", &e->basicPay);

    


    calculateSalary(e);
}


void displayEmployee(struct Employee e) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.ID);
    printf("Name: %s\n", e.name);
    printf("Basic Pay: %.2f\n", e.basicPay);
    printf("DA: %.2f\n", e.DA);
    printf("HRA: %.2f\n", e.HRA);
    printf("Gross Salary: %.2f\n", e.grossSalary);
}

int main() {
    struct Employee e;

    inputEmployee(&e);

    displayEmployee(e);

    return 0;
}
