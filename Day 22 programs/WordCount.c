#include <stdio.h>

int main()
{
    char str[1000];
    int i, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            words++;
        }
    }

    printf("Number of words = %d", words);

    return 0;
}