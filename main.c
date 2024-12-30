#include <stdio.h>

int main() {
    int num1, num2, ch;
    float ans;  // Changed to float to handle division properly

    // Take input for the two numbers
    printf("Enter your 1st Number = ");
    scanf("%d", &num1);
    
    printf("Enter your 2nd Number = ");
    scanf("%d", &num2);
    
    // Display options
    printf("\n1 for Addition");
    printf("\n2 for Subtraction");
    printf("\n3 for Multiplication");
    printf("\n4 for Division");
    printf("\nEnter your Choice = ");
    scanf("%d", &ch);

    // Perform operation based on choice
    if (ch == 1) {
        ans = num1 + num2;
        printf("Result = %.2f\n", ans);
    } else if (ch == 2) {
        ans = num1 - num2;
        printf("Result = %.2f\n", ans);
    } else if (ch == 3) {
        ans = num1 * num2;
        printf("Result = %.2f\n", ans);
    } else if (ch == 4) {
        if (num2 != 0) {
            ans = (float)num1 / num2;  // Cast to float for division
            printf("Result = %.2f\n", ans);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
