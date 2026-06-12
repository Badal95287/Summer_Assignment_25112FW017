#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp, digit, sum = 0, digits = 0;

    temp = n;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}