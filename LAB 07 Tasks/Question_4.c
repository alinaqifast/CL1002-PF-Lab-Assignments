#include <stdio.h>
int main(){
    int numbers[6];
    int temp,i;
    for(i=0;i<6;i++){
    printf("Enter %d number:",i+1);
    scanf("%d",&numbers[i]);
}
   temp = numbers[5];
  for(i=5;i>0;i--){
   numbers[i] = numbers[i-1];
  }
  numbers[0] = temp;

  for(i=0;i<6;i++){
    printf("%d,",numbers[i]);
  }
  return 0;

