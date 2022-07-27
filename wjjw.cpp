#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[12] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5 };
    int temp[12];
    int i, j, k, n = 12;

    for (i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j] = arr[i];
            j++;
        }
    }

    temp[j] = arr[n - 1];

    for (k = 0; k <= j; k++) {
        printf("%d\n", temp[k]);
    }

    return 0;
}
