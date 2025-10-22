#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int i, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for(i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != ' ' && str[i] != '\n') 
            special++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
