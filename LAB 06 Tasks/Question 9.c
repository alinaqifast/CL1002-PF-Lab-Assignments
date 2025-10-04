#include<stdio.h>

int main(){
int n,i;
printf("Which table would you like to print?:\t");
scanf("%d",&n);
printf("\n");
for(i=1;i<=10;i++){
    printf("%d \t x \t %d \t = \t %d\n",n,i,n*i);
}

return 0;
}
