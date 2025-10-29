#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};


void inputStudent(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNumber);

    printf("Enter name: ");
    scanf(" %[^\n]s", &s->name); 

    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

 
    inputStudent(&s);

    
    displayStudent(s);

    return 0;
}
