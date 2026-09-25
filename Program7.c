#include <stdio.h>

// Function declarations
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to catch whitespace
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': 
            if (num2 != 0) {
                result = divide(num1, num2); 
            } else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default: 
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
