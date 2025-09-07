#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    float result;

    printf("Simple Calculator\n");
    printf("Enter first number  : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &op);   

    if (op == '+') {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    } 
    else if (op == '*') {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            result = (float)num1 / num2;
            printf("Result = %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid operation! Please use +, -, *, or /\n");
    }
    
}


