#include<stdio.h>
int main() {
    int age, price;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        price = 200;
    else if (age >= 12 && age <= 18)
        price = 300;
    else if (age >= 18 && age <= 60)
        price = 500;
    else
        price = 250;

    printf("Ticket Price = %d\n", price);
    return 0;
}
