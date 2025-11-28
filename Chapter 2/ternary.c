#include <stdio.h>
int main() {
    int a = 10 , b = 5;
    int max = (a > b) ? a : b;
    printf("Conditional Operator: max(%d, %d) = %d\n\n", a, b, max);
}

