#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 5000, amount;

    printf("===== ATM MACHINE =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Incorrect PIN. Access Denied!\n");
        return 0;
    }

    printf("Login Successful!\n");

    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Money deposited successfully.\n");
                printf("Updated balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}