#include <stdio.h>

int main(){

    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);


    char B = 'B';
    char *ptr_b = &B;
    printf("The address of a is %u\n", &B);
    printf("The address of a is %u\n", ptr_b);
    ptr_b++;
    printf("The value of ptr_b is %u\n", ptr_b);

}