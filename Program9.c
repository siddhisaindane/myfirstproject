#include <stdio.h>

int main() {
    int numbers[5] = {12, 45, 7, 91, 23};
    int largest = numbers[0]; // Assume the first element is the largest

    // Loop through the array starting from the second element
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if a bigger number is found
        }
    }

    printf("The largest number in the array is: %d\n", largest);
    return 0;
}
