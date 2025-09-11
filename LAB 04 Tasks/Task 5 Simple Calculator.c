#include<stdio.h>
int main() {
    int a, b;
    char op;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
