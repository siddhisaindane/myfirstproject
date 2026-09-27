#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter two integers: ");
    // scanf() reads inputs from the keyboard; %d is for integers
    scanf("%d %d", &num1, &num2);
    
    // Adding the two numbers
    sum = num1 + num2;
    
    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
