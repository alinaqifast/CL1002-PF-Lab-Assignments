#include<stdio.h>

int main(){

    int employee_IDs[] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112};
    int userInputID;
    int flag = 0;
    printf("Enter the employee ID: ");
    scanf("%d", &userInputID);

    for(int i=0; i<18; i++){
        if (employee_IDs[i]==userInputID){
            flag = 1;
        }
    }

    if (flag){
        printf("The Employee ID exists.");
    }
    else{
        printf("The Employee ID does not exist.");
    }

}
