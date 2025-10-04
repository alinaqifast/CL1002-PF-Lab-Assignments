#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num&1){
        printf("The number is Odd.");
    }
    else{
        printf("The number is Even.");

    }
return 0;
}
