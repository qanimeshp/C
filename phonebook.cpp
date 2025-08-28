#include <stdio.h>
int main() {
    printf("Enter Your Name:\n");
    char name[50];
    scanf("%s", name);
    
    printf("Enter Your Phone Number:\n");
    char phone[15];
    scanf("%s", phone);
    
    printf("Phonebook Entry:\n");
    printf("Name: %s\n", name);
    printf("Phone Number: %s\n", phone);
    
    return 0;
}