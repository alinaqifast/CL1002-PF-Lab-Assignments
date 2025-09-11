#include<stdio.h>
int main() {
    int balance, withdraw;
    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (balance > withdraw){
        if(withdraw % 500 == 0)
            printf("\nWithdrawal Allowed\n");
        else
            printf("\nWithdrawal Rejected! Please withdraw a multiple of 500\n");
    }
    else
        printf("\nWithdrawal Rejected! Insufficient balance\n");
    return 0;
}
