#include <stdio.h>

int main() {
    int num;
    int num2;
    int result;
    printf("Enter The Divided Number First");
    scanf("%d", &num);
    printf("Enter The Divided Number By First Number");
    scanf("%d", &num2);
    result = num % num2;
    if (num % num2 == 0)
    {
        /* code */ 
        printf("The Number is Divided Success full With %d and The Result is %d" , num2 , result);
    }
    else{
        printf("The Number is Not Divided SuccessFull the Reminder is %d" , result);
    }
    
}