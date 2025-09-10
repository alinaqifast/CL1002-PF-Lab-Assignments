#include<stdio.h>

int main(){
    float length, width, perimeter, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);

    area = length*width;
    perimeter = (length*2) + (width*2);
    printf("\nThe area of the rectangle is %f", area);
    printf("\nThe perimeter of the rectange is %f", perimeter);

    return 0;

}
