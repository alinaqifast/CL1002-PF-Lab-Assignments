#include<stdio.h>
int main(){
    int array1[]={1,2,2,3,3,3,4,5,6,6};
    int array2[]={4,5,6,7,8,9,0};

    int unionArray[50] = {};
    int unionCount = 0;
    int array1size = sizeof(array1)/sizeof(array1[0]);
    int array2size = sizeof(array2)/sizeof(array2[0]);
    for(int i = 0; i < array1size;i++){
        int unique = 1;
        for(int j=0;j<unionCount;j++){
            if (array1[i]==unionArray[j]){
                unique = 0;
                break;
            }
        }
        if (unique){
            unionArray[unionCount++]=array1[i];
        }
    }

    for(int i = 0; i < array2size;i++){
        int unique = 1;
        for(int j=0;j<unionCount;j++){
            if (array2[i]==unionArray[j]){
                unique = 0;
            }
        }
        if (unique){
            unionArray[unionCount++]=array2[i];
        }
    }

    for(int i = 0; i < unionCount;i++){
        printf("%d ",unionArray[i]);
    }

}