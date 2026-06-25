#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char names[50][50], temp[50];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}