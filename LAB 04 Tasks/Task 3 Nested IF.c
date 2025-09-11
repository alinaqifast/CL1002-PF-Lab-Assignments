#include<stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3)
            printf("The largest number is Number 1: %d\n", num1);
        else
            printf("The largest number is Number 3: %d\n", num3);
    } else {
        if (num2 > num3)
            printf("The largest number is Number 2: %d\n", num2);
        else
            printf("The largest number is Number 3: %d\n", num3);
    }

    return 0;
}
