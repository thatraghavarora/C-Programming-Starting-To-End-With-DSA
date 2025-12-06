#include <stdio.h>

int main(){
    struct employee{
        char name[30];
        int roll;
        char subject[20];
    };

    

    struct employee swiggy = {"Swiggy", 2, "Swiggy "};
    struct employee tcs;
    printf("%s %d %s ", swiggy.name , swiggy.roll , swiggy.subject);
    printf("%s %d %s ", tcs.name , tcs.roll , tcs.subject);

}