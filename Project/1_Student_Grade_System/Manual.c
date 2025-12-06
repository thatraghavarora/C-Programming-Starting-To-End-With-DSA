#include <stdio.h>

struct Students{
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total;
    float percentage;
    char grade;
};
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int main(){
    int choice, count = 0, rollToSearch, i;
    struct Students student[100];
    while(1){
        printf("===== Student Grade Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice){
            case 1:
                  printf("===== Add Student Records =====\n");
                  printf("Enter Roll Number: ");
                  scanf("%d", &student[count].roll);
  
                  printf("Enter Name: ");
                  scanf("%student", student[count].name);
  
                  printf("Enter Marks in Subject 1: ");
                  scanf("%f", &student[count].marks1);
  
                  printf("Enter Marks in Subject 2: ");
                  scanf("%f", &student[count].marks2);
  
                  printf("Enter Marks in Subject 3: ");
                  scanf("%f", &student[count].marks3);
  
                  student[count].total = student[count].marks1 + student[count].marks2 + student[count].marks3;
                  student[count].percentage = student[count].total / 3.0;
  
                  student[count].grade = calculateGrade(student[count].percentage);
  
                  printf("Student Added Successfully!\n");
                  count++;
                  break; 
            case 2:
                  if (count == 0) {
                      printf("No students available!\n");
                  } else {
                      printf("\n--- Student Records ---\n");
                      for (i = 0; i < count; i++) {
                          printf("\nRoll: %d", student[i].roll);
                          printf("\nName: %student", student[i].name);
                          printf("\nMarks: %.2f, %.2f, %.2f", student[i].marks1, student[i].marks2, student[i].marks3);
                          printf("\nTotal: %.2f", student[i].total);
                          printf("\nPercentage: %.2f%%", student[i].percentage);
                          printf("\nGrade: %c\n", student[i].grade);
                         
                      }
                  }
                  count++;
                  break;   
                  
            case 3 :
                    printf("Enter the Roll Number");
                    scanf("%d", &rollToSearch);
                    for (i = 0; i < count; i++) {
                        if (rollToSearch == student[i].roll){
                            printf("\nRoll: %d", student[i].roll);
                        printf("\nName: %student", student[i].name);
                        printf("\nMarks: %.2f, %.2f, %.2f", student[i].marks1, student[i].marks2, student[i].marks3);
                        printf("\nTotal: %.2f", student[i].total);
                        printf("\nPercentage: %.2f%%", student[i].percentage);
                        printf("\nGrade: %c\n", student[i].grade);
                    }
                }
            case 4:
            return 0;
            
        }
    }
}