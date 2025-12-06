#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[100];
    int count = 0;      // kitne accounts bane hain
    int choice;
    int accSearch;
    float amount;
    int i;

    while (1) {
        printf("\n===== Simple Banking System =====\n");
        printf("1. Create New Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:  // Create New Account
            printf("\nEnter Account Number: ");
            scanf("%d", &accounts[count].accNo);

            printf("Enter Account Holder Name : ");
            scanf("%s", accounts[count].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &accounts[count].balance);

            printf("Account created successfully!\n");
            count++;
            break;

        case 2:  // Deposit
            printf("\nEnter Account Number: ");
            scanf("%d", &accSearch);

            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accSearch) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);

                    if (amount <= 0) {
                        printf("Invalid amount!\n");
                    } else {
                        accounts[i].balance += amount;
                        printf("Amount deposited successfully!\n");
                        printf("New Balance: %.2f\n", accounts[i].balance);
                    }
                    break;
                }
            }

            if (i == count) {
                printf("Account not found!\n");
            }

            break;

        case 3:  // Withdraw
            printf("\nEnter Account Number: ");
            scanf("%d", &accSearch);

            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accSearch) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);

                    if (amount <= 0) {
                        printf("Invalid amount!\n");
                    } else if (amount > accounts[i].balance) {
                        printf("Insufficient balance!\n");
                    } else {
                        accounts[i].balance -= amount;
                        printf("Amount withdrawn successfully!\n");
                        printf("New Balance: %.2f\n", accounts[i].balance);
                    }
                    break;
                }
            }

            if (i == count) {
                printf("Account not found!\n");
            }

            break;

        case 4:  // Check Balance
            printf("\nEnter Account Number: ");
            scanf("%d", &accSearch);

            for (i = 0; i < count; i++) {
                if (accounts[i].accNo == accSearch) {
                    printf("\n--- Account Details ---\n");
                    printf("Account No: %d\n", accounts[i].accNo);
                    printf("Name      : %s\n", accounts[i].name);
                    printf("Balance   : %.2f\n", accounts[i].balance);
                    break;
                }
            }

            if (i == count) {
                printf("Account not found!\n");
            }

            break;

        case 5:  // Display All Accounts
            if (count == 0) {
                printf("No accounts available!\n");
            } else {
                printf("\n--- All Accounts ---\n");
                for (i = 0; i < count; i++) {
                    printf("\nAccount No: %d", accounts[i].accNo);
                    printf("\nName      : %s", accounts[i].name);
                    printf("\nBalance   : %.2f\n", accounts[i].balance);
                }
            }
            break;

        case 6:
            printf("Exiting... Thank you!\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
