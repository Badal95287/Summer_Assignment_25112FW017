#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, len;

    printf("Enter first string: ");
    gets(str1);

    do
    {
        printf("\n--- String Operation Menu ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                len = strlen(str1);
                printf("Length of string = %d\n", len);
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Enter second string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                gets(str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                strcpy(temp, str1);
                strrev(temp);
                printf("Reverse string = %s\n", temp);
                break;

            case 6:
                strcpy(temp, str1);
                for(int i = 0; temp[i] != '\0'; i++)
                    temp[i] = toupper(temp[i]);

                printf("Uppercase string = %s\n", temp);
                break;

            case 7:
                strcpy(temp, str1);
                for(int i = 0; temp[i] != '\0'; i++)
                    temp[i] = tolower(temp[i]);

                printf("Lowercase string = %s\n", temp);
                break;

            case 8:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 8);

    return 0;
}