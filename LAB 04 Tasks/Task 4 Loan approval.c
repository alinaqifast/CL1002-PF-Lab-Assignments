#include<stdio.h>
int main() {
    int age;
    float salary;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter age: ");
    scanf("%d", &age);

    if (salary >= 40000 && age >= 25)
        printf("Loan Approved\n");
    else
        printf("Loan Rejected\n");
    return 0;
}
