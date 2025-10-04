#include<stdio.h>

int main(){
    int num, rightShiftedNum, leftShiftedNum;
    printf("Enter the number: ");
    scanf("%d", &num);
    leftShiftedNum = num << 2;
    rightShiftedNum = num >> 2;

    printf("\nThe left shifted number with 2 bits is: %d", leftShiftedNum);
    printf("\nThe right shifted number with 2 bits is: %d", rightShiftedNum);

return 0;
}
