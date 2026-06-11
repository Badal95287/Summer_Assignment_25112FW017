#include <stdio.h>

long long factorial(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %lld", n, factorial(n));

    return 0;
}

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}