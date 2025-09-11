#include<stdio.h>
int main() {
    int attendance, marks;
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    printf("Enter internal marks: ");
    scanf("%d", &marks);

    if (attendance >= 75 && marks >= 40)
        printf("Eligible for Final Exam\n");
    else
        printf("Not Eligible\n");
    return 0;
}
