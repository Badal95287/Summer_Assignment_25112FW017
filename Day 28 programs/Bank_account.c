#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

struct BankAccount account;

void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    printf("\nAccount Created Successfully!\n");
}

void deposit() {
    float amount;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    account.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

void withdraw() {
    float amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount > account.balance) {
        printf("Insufficient Balance!\n");
    }
    else {
        account.balance -= amount;
        printf("Withdrawal Successful!\n");
    }
}

void checkBalance() {
    printf("\nCurrent Balance: %.2f\n", account.balance);
}

void displayAccount() {
    printf("\n--- Account Details ---\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);
}

int main() {

    int choice;

    while(1) {

        printf("\n\n===== BANK ACCOUNT SYSTEM =====");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Display Account Details");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                displayAccount();
                break;

            case 6:
                printf("Thank you for using Bank System!");
                return 0;

            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}