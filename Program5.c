#include <stdio.h>

int main() {
    int number;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if number is perfectly divisible by 2
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
