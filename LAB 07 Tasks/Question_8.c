#include <stdio.h>
int main(){
   int array[10];
   int isasc=1;
   for(int i =0;i<10;i++){
    printf("Enter %d number:",i+1);
    scanf("%d",&array[i]);
   }
   for(int i=0;i<9;i++){
    if(array[i]>array[i+1]){
        isasc=0;
        break;
    }
   }
   if(isasc){
    printf("\nThe numbers are sorted in ascending order\n");
   }else{
    printf("\nNot in ascending order!\n");
   }
}
