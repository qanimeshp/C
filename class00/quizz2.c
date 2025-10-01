#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void createFile();
void updateFile();
void deleteFile();
void displayMenu();

int main() {
    int choice;
    
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        switch(choice) {
            case 1:
                createFile();
                break;
            case 2:
                updateFile();
                break;
            case 3:
                deleteFile();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n");
    } while(choice != 6);
    
    return 0;
}

void displayMenu() {
    
    printf("1. Create file\n");
    printf("2. Update file\n");
    printf("3. Delete file\n");
    printf("4. Exit\n");
    
}

void createFile() {
    char filename[100];
    char content[1000];
    FILE *file;
    
    printf("Enter filename to create: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0; 
    
    
    file = fopen(filename, "r");
    if (file != NULL) {
        printf("Error: File '%s' already exists!\n", filename);
        fclose(file);
        return;
    }
    
    printf("Enter content (press Enter on empty line to finish):\n");
    fgets(content, sizeof(content), stdin);
    content[strcspn(content, "\n")] = 0; 
    
   
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file '%s'!\n", filename);
        return;
    }
    
    fprintf(file, "%s", content);
    fclose(file);
    
    printf("File '%s' created successfully!\n", filename);
}

void updateFile() {
    char filename[100], content[1000], mode[2];
    
    printf("Enter filename to update: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File doesn't exist!\n");
        return;
    }
    fclose(file);
    
    printf("Enter 'a' to append or 'w' to overwrite: ");
    fgets(mode, sizeof(mode), stdin);
    getchar();
    
    printf("Enter content: ");
    fgets(content, sizeof(content), stdin);
    content[strcspn(content, "\n")] = 0;
    
    file = fopen(filename, mode);
    fprintf(file, "%s\n", content);
    fclose(file);
    
    printf("File '%s' updated successfully!\n", filename);
}

void deleteFile() {
    char filename[100], confirm;
    
    printf("Enter filename to delete: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;
    
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully!\n", filename);
    } else {
        printf("Error: File doesn't exist or cannot be deleted!\n");
    }
}