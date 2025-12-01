#include <stdio.h>
#include <string.h>

int main() {
    char a[50] = "Hello";
    char b[50] = "World";
    char c[50];

    // 1️⃣ strcpy – copy b into c
    strcpy(c, b);
    printf("After strcpy: c = %s\n", c);

    // 2️⃣ strcmp – compare a and b
    if (strcmp(a, b) == 1)
        printf("strcmp: a and b are equal\n");
    else
        printf("strcmp: a and b are NOT equal\n");

    // 3️⃣ strcat – append b to a
    strcat(a, b);
    printf("After strcat: a = %s\n", a);

    return 0;
}
