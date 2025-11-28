#include <stdio.h>
int main() {
    int temp = 6;
    printf("Increment / Decrement (start = %d)\n", temp);
    printf("temp++ = %d\n", temp++);
    printf("After temp++ -> %d\n", temp);
    printf("++temp = %d\n", ++temp);
    printf("temp-- = %d\n", temp--);
    printf("After temp-- -> %d\n", temp);
    printf("--temp = %d\n\n", --temp);
}

