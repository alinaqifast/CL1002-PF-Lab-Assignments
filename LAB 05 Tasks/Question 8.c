#include<stdio.h>

int main(){
    int input,mask, result;
    printf("Enter the number whose second bit you need to shift: ");
    scanf("%d",&input);
    mask = 1<<2;
    result = input^mask;
    printf("%d when its second bit is toggled becomes:\t%d", input,result);
return 0;
}
