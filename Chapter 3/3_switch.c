#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Say Hello\n");
    printf("2. Say Goodbye\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Goodbye!\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
