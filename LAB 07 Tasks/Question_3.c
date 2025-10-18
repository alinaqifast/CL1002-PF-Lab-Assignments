#include<stdio.h>

int main(){

    int participants[8];

    for(int i=0;i<8;i++){
        printf("Enter the age of participant %d: ", i+1);
        scanf("%d", &participants[i]);
    }
    int smallest = participants[0];
    for(int i=1;i<8;i++){
        if (participants[i] < smallest) {
            smallest = participants[i];
        }
    }
    printf("\n%d is the smallest age.", smallest);
}
