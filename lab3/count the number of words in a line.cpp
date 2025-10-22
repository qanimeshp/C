#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    int count = 0, i;

    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin); 

    
    for (i = 0; line[i] != '\0'; i++) {
        
        if ((i == 0 && line[i] != ' ' && line[i] != '\n') ||
            (line[i] != ' ' && line[i-1] == ' ')) {
            count++;
        }
    }

    printf("Number of words: %d\n", count);

    return 0;
}
