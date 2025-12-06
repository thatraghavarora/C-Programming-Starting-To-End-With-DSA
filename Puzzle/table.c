#include <stdio.h>

int main(){
    int table,result=0;
    printf("Enter the Table Number\n");
    scanf("%d", &table);

    for(int i=0; i<=10;i++){
        result = table * i;
        printf("5 X %d = %d\n", i , table*i);
    }
}