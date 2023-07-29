#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
