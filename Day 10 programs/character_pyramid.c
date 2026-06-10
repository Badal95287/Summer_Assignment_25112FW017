#include <stdio.h>

int main() {
    int n, i, j;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        ch = 'A';

        for(j = 1; j <= i; j++)
            printf("%c", ch++);

        ch -= 2;

        for(j = 1; j < i; j++)
            printf("%c", ch--);

        printf("\n");
    }

    return 0;
}