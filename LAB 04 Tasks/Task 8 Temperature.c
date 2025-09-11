#include<stdio.h>
int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp > 30)
        printf("Hot Day\n");
    else
        printf("Pleasant Day\n");
    return 0;
}
