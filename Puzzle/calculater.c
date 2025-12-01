#include <stdio.h>

int main() {
    int first, second;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);   // space to avoid newline issue

    switch(op) {
        case '+':
            printf("Result = %d\n", first + second);
            break;
        case '-':
            printf("Result = %d\n", first - second);
            break;
        case '*':
            printf("Result = %d\n", first * second);
            break;
        case '/':
            if (second == 0)
                printf("Error! Division by zero.\n");
            else
                printf("Result = %d\n", first / second);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
