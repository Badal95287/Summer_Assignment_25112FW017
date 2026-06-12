#include <stdio.h>

int perfect(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfect(num))
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}