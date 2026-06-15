#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }

    printf("Array after moving zeros to end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}