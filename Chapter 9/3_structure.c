#include <stdio.h>
#include <string.h>

// Creating a custom structure using typedef
typedef struct employee {
    int id;
    char name[20];
    float salary;
} Emp;

// Function to input details of an employee
void inputEmployee(Emp *e) {
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);

    printf("Enter Employee Name: ");
    scanf("%s", e->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e->salary);
}

// Function to display employee information
void displayEmployee(Emp e) {
    printf("\n--- Employee Details ---\n");
    printf("ID      : %d\n", e.id);
    printf("Name    : %s\n", e.name);
    printf("Salary  : %.2f\n", e.salary);
}

int main() {
    Emp e1;        // Declare structure variable
    Emp *ptr = &e1;  // Pointer to structure

    printf("Enter details of employee:\n");
    inputEmployee(ptr); // Passing pointer to function

    displayEmployee(e1); // Display details

    return 0;
}
