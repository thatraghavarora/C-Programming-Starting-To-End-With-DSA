#include <stdio.h>
#include <string.h>

char usernamecheck[50];
char passwordcheck[50];

struct studentlist {
    char name[20];
    int  roll;
    char username[20];
    char password[20];
    int  totalClasses;
    int  attendedClasses;
};

void showAttendance(struct studentlist *student) {
    float percentage = 0.0f;
    if (student->totalClasses > 0) {
        percentage = (student->attendedClasses * 100.0f) / student->totalClasses;
    }

    printf(
        "\n--------------- Attendance Report ---------------\n"
        "Name            : %s\n"
        "Roll Number     : %d\n"
        "Total Classes   : %d\n"
        "Classes Attended: %d\n"
        "Attendance      : %.2f%%\n"
        "-------------------------------------------------\n",
        student->name,
        student->roll,
        student->totalClasses,
        student->attendedClasses,
        percentage
    );
}

void studentLogin() {
    // Array of 5 students
    struct studentlist student[5] = {
        {"Pragya",  1, "pragya01", "pass01", 60, 55},
        {"Raghav",  2, "raghav02", "pass02", 60, 48},
        {"Simran",  3, "simran03", "pass03", 60, 52},
        {"Aman",    4, "aman04",   "pass04", 60, 50},
        {"Priya",   5, "priya05",  "pass05", 60, 58}
    };

    

    printf(
        "===================================================\n"
        "                  Login System\n"
        "===================================================\n"
    );

    printf("Enter Your Username: ");
    scanf("%49s", usernamecheck);

    printf("Enter Your Password: ");
    scanf("%49s", passwordcheck);

    int found = 0;

    // Check entered username & password with all 5 students
    for (int i = 0; i < 5; i++) {
        if (strcmp(usernamecheck, student[i].username) == 0 &&
            strcmp(passwordcheck, student[i].password) == 0) {

            printf("\nLogin successful!\n");
            printf("Welcome %s (Roll: %d)\n", student[i].name, student[i].roll);
            showAttendance(&student[i]);
            
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nInvalid username or password!\n");
    }
}

int main() {
    int choose;

    printf(
        "===================================================\n"
        "            Attendance Management System\n"
        "===================================================\n"
        "| 1. Login As Student\n"
        "| Exit\n"
        "Enter your choice: "
    );

    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("\nStudent login selected.\n");
            studentLogin();
            break;
        case 2:
            printf("\nTeacher login .\n");
            break;
        case 3:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid choice!\n");
            break;
    }

    return 0;
}
