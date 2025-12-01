#include <stdio.h>

int main() {
    char st[30];
    fgets(st, 30, stdin);   // safe alternative

    printf("%s", st);
    printf("hey");
    

    return 0;
}