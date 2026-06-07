#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int recursiveDigitSum(int n) {
    if (n < 10)
        return n;

    return recursiveDigitSum(sumDigits(n));
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Recursive sum of digits = %d\n", recursiveDigitSum(num));

    return 0;
}