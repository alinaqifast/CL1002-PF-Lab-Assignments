#include <stdio.h>
int main(){
    int n = 121;
    int original = n ;
    int reversed = 0 , remainder ;

while (n > 0){
    remainder = n % 10 ;
    reversed = reversed * 10 + remainder ;
    n = n / 10 ;
}

if (original == reversed){
    printf("The Number Is A Palindrome");
}
else {
    printf("The Number Is Not A Palindrome");
}
return 0;
}
