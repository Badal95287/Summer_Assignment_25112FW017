#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character is '%c' with %d occurrences", maxChar, max);

    return 0;
}