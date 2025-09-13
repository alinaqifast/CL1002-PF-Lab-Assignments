#include <stdio.h>

int main() {
    int pass;
    printf("enter your password: ");
    scanf("%d", &pass);
    if (pass == 1234) {
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }
    return 0;
}
