#include <stdio.h>

int main() {
    int swap_a = 10, swap_b = 20;
    int *ptr_a = &swap_a;
    int *ptr_b = &swap_b;
    int temp;

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("The value of A %d\n", swap_a);
    printf("The value of B %d\n", swap_b);

    return 0;
}


















