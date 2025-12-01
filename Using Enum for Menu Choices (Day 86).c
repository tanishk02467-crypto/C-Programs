#include <stdio.h>

int main() {
    
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

    int choice, a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

  
}