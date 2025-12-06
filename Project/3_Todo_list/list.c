#include <stdio.h>
#include <string.h>

struct Todo {
    char task[100];
};

int main() {
    struct Todo todo[100];
    int choice, count = 0, i, del;

    while (1) {
        printf("\n===== TO-DO LIST =====\n");
        printf("1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // remove leftover newline

        switch (choice) {

        case 1:  // Add Task
            printf("Enter Task: ");
            fgets(todo[count].task, 100, stdin);

            // remove newline from fgets
            todo[count].task[strcspn(todo[count].task, "\n")] = '\0';

            printf("Task added successfully!\n");
            count++;
            break;

        case 2:  // Show All Tasks
            if (count == 0) {
                printf("No tasks found!\n");
            } else {
                printf("\n--- Your Tasks ---\n");
                for (i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, todo[i].task);
                }
            }
            break;

        case 3:  // Delete a Task
            printf("Enter task number to delete: ");
            scanf("%d", &del);

            if (del < 1 || del > count) {
                printf("Invalid task number!\n");
            } else {
                // shift tasks up
                for (i = del - 1; i < count - 1; i++) {
                    strcpy(todo[i].task, todo[i + 1].task);
                }
                count--;
                printf("Task deleted successfully!\n");
            }
            break;

        case 4:  // Exit
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
