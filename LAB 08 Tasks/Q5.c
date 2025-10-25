#include<stdio.h>

int main(){

    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
    };

    printf("\n--Total Marks--\n");

    for(int i=0;i<5;i++){
        int student_total = 0;
        for(int j=0;j<3;j++){
            student_total+=marks[i][j];
        }
        printf("\nStudent %d: %d", i+1, student_total);

    }
    printf("\n\n--Subject Average--\n");

    for(int k=0;k<3;k++){
        int subject_sum = 0;
        for(int l=0;l<5;l++){
            subject_sum += marks[l][k];

        }
        float subject_avg = subject_sum/5.0;
        printf("\n Subject %d: %.2f",k+1, subject_avg);
    }

    printf("\n\n");
return 0;
}