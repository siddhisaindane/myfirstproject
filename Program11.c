#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer to check: ");
    scanf("%d", &number);

    // If the remainder when divided by 2 is 0, the number is even
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
