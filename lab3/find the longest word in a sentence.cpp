#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longest[100] = "";
    char word[100];
    int maxLen = 0, len = 0;
    int i = 0, j = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    while(sentence[i] != '\0') {
        j = 0;
        
        
        while(sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j] = sentence[i];
            i++;
            j++;
        }
        word[j] = '\0';
        
        len = strlen(word);
        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        
        
        while(sentence[i] == ' ') {
            i++;
        }
    }
    
    printf("Longest word: %s (Length: %d)\n", longest, maxLen);
    return 0;
}
