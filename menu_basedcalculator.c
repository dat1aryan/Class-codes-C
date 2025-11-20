#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf(" 1. Addition\n");
    printf(" 2. Subtraction\n");
    printf(" 3. Multiplication\n");
    printf(" 4. Division\n");

    int option;
    printf("Enter your choice (1-4): ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Addition: %d\n", a + b);
            break;
        case 2:
            printf("Subtraction: %d\n", a - b);
            break;
        case 3:
            printf("Multiplication: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Division: %d\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid option chosen.\n");
            break;
    }
    
    return 0; 
}