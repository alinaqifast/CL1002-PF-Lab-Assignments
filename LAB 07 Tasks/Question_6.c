#include <stdio.h>
int main(){
    int array[10];
    int posSum =0;
    for(int i =0;i<10;i++){
        printf("Enter %d number:",i+1);
        scanf("%d",&array[i]);
        if(array[i]>=0){
            posSum += array[i];
        }
    }
    printf("The Sum of positive numbers in array is:%d",posSum);
    return 0;
}
