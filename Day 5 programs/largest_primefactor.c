#include <stdio.h>

int main() {
    int n, largestFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    if (n > 2)
        largestFactor = n;

    printf("Largest Prime Factor = %d\n", largestFactor);

    return 0;
}