#include <stdio.h>

int main() {
    int n, i, sum = 0, total, missing;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}