#include <stdio.h>

int main() {
    int i, n, isPrime;
    // n = 11;
    scanf("%d", &n);
    isPrime = 1;
    if(n>1){
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
        printf("\n%d is: ",n);

        if(isPrime){
            printf("A Prime Number!\n");
        }
        else{
            printf("Not a prime Number!\n");
        }
    }
    else{
        printf("\nInvalid Input. Enter a number greater than 1!\n");
    }
    return 0;
}
