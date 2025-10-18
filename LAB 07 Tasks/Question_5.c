#include <stdio.h>
int main(){
    int numbers[12],removeNum,newindex=12;
    for(int i =0;i<12;i++){
        printf("Enter a %d number:",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Enter a removing number:");
    scanf("%d",&removeNum);
    for(int i =0;i<newindex ;i++){
        if(numbers[i] == removeNum){
            for(int j =i;j<(newindex-1);j++){
                numbers[j] = numbers[j+1];
            }
            i--;
            newindex--;
        }
    }
    for(int i =0;i<newindex;i++){
        printf("%d,",numbers[i]);
    }
}
