#include <stdio.h>

int main() {
    int array1[] = {1, 2, 2, 3, 3, 3, 4, 5, 6, 6, 6};
    int array2[] = {4, 5, 6, 7, 8, 9, 0};
    int intersectionArray[50] = {0};

    int array1size = sizeof(array1) / sizeof(array1[0]);
    int array2size = sizeof(array2) / sizeof(array2[0]);
    int intersectionCount = 0;

    for (int i = 0; i < array1size; i++) {
        // Check if element is already in intersectionArray
        int alreadyInIntersection = 0;
        for (int k = 0; k < intersectionCount; k++) {
            if (array1[i] == intersectionArray[k]) {
                alreadyInIntersection = 1;
                break;
            }
        }

        if (alreadyInIntersection)
            continue; // Skip duplicates

        // Check if element exists in array2
        for (int j = 0; j < array2size; j++) {
            if (array1[i] == array2[j]) {
                intersectionArray[intersectionCount++] = array1[i];
                break;
            }
        }
    }

    printf("Common elements: ");
    for (int i = 0; i < intersectionCount; i++) {
        printf("%d ", intersectionArray[i]);
    }
    printf("\n");

    printf("Number of common elements: %d\n", intersectionCount);

    return 0;
}
