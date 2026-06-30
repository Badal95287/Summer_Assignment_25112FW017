#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    while(1)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 5)
        {
            printf("Exiting calculator...");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch(choice)
        {
            case 1:
                result = a + b;
                printf("Result = %.2f", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2f", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2f", result);
                break;

            case 4:
                if(b != 0)
                {
                    result = a / b;
                    printf("Result = %.2f", result);
                }
                else
                {
                    printf("Cannot divide by zero");
                }
                break;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}