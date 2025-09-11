#include<stdio.h>
int main() {
    float bill, payable;
    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if (bill > 5000)
        payable = bill - (bill * 0.10);
    else
        payable = bill;

    printf("Final Payable Amount = %f\n", payable);
    return 0;
}
