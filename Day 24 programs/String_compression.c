#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], comp[200];
    int i, j = 0, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        comp[j++] = str[i];
        j += sprintf(&comp[j], "%d", count);
    }

    comp[j] = '\0';

    printf("Compressed string: %s", comp);

    return 0;
}