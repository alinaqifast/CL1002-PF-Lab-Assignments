#include<stdio.h>

int main(){
int n,i;
// KEEP ASKING FOR INPUT UNTIL USER ENTERS ZERO
do{
    printf("\nWhich table would you like to print?:\t");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=10;i++){
        printf("%d \t x \t %d \t = \t %d\n",n,i,n*i);
    }
}while(n!=0);

return 0;
}
