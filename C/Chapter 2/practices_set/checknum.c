#include <stdio.h>

int main() {
    int num;
    printf("Enter A Number\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Number is Divided Successfull by 2");
    }
    else{
        printf("Number is Not Divied By 2");
    }
}