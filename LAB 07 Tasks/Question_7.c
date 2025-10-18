#include <stdio.h>
int main(){
  char text[100];
  int digitsum =0;
  printf("Enter text:");
  scanf("%[^\n]",text);
  for(int i=0; text[i] != '\0' ;i++ ){
    if(text[i]>='0' && text[i]<='9'){
        digitsum += (text[i] -'0');
        }
  }
printf("The sum of all extracted digits is:%d",digitsum);
return 0;
}
