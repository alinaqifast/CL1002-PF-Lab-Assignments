#include <stdio.h>
int main(){

    //USING A THIRD VARIABLE
    int num1,num2,swap;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);

    printf("\nBefore swapping \nNumber 1 = %d \nNumber 2 = %d.\n",num1,num2);

    swap=num1;
    num1=num2;
    num2=swap;

    printf("\nAfter Swapping \nNumber 1 = %d \nNumber 2 = %d.",num1,num2);
    return 0;

}
