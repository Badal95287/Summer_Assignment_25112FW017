#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("First repeating character is: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found");

    return 0;
}