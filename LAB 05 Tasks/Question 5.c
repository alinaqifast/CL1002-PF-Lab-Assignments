#include<stdio.h>

int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);

if(num%3==0 && num%2==0){
        printf("Number Divisible by both 2 and 3!");
}
else{
    printf("The Number is not divisible by both 2 and 3!");
}
return 0;
}
