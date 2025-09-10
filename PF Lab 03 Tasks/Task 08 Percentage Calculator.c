#include<stdio.h>

int main(){

    float percentage, marks1, marks2, marks3, sum;
    printf("Enter the marks of subject 1: ");
    scanf("%f",&marks1);
    printf("Enter the marks of subject 2: ");
    scanf("%f",&marks2);
    printf("Enter the marks of subject 3: ");
    scanf("%f",&marks3);

    sum = marks1+marks2+marks3;

    //This program assumes that the marks are out of hundred

    percentage = sum/300*100;
    printf("\nYour total marks out of 300 are: %f", sum);
    printf("\nYour percentage is: %f", percentage);
    return 0;
}
