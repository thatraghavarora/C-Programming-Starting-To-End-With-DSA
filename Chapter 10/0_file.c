#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("hacker.txt", "r");
    if (ptr == NULL){
        printf("404 File Not Found");
    }
    int num;
    fscanf(ptr , "%d", &num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
}