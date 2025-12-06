#include <stdio.h>
#include <string.h>

struct employee {
    char name[40];
    int roll;
};

int main() {
    struct employee e1;
    strcpy(e1.name, "Raghav");   // assigning string
    e1.roll = 18;

    struct employee *ptr;
    ptr = &e1;

    printf("Name: %s\n", (*ptr).name);    // Method 1
    printf("Roll: %d\n", (*ptr).roll);

   
    printf("Name: %s\n", ptr->name);      // Method 2
    printf("Roll: %d\n", ptr->roll);

    return 0;
}
