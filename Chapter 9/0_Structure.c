#include <stdio.h>
#include <string.h>

int main(){
    struct student {
        char name[50];
        int age;
        int marks;
    };

    struct student s1;
    strcpy(s1.name , "Raghav");
    printf("%s\n", s1.name);
    s1.age = 17;
    printf("%d\n",s1.age);
    s1.marks = 99;
    printf("%d\n",s1.marks);
}
