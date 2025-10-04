#include <stdio.h>

int main() {
    int choice1, choice2;

    printf("Enter main choice (1 for Phone, 2 for Laptop): ");
    scanf("%d", &choice1);

    switch (choice1) {
        case 1:
            printf("Phone selected.\n");
            printf("Enter brand choice (1 for Samsung, 2 for Apple): ");
            scanf("%d", &choice2);

            switch (choice2) {
                case 1:
                    printf("Samsung selected.\n");
                    break;
                case 2:
                    printf("Apple selected.\n");
                    break;
                default:
                    printf("Invalid brand choice.\n");
            }
            break;

        case 2:
            printf("Laptop selected.\n");
            printf("Enter brand choice (1 for Dell, 2 for HP): ");
            scanf("%d", &choice2);

            switch (choice2) {
                case 1:
                    printf("Dell selected.\n");
                    break;
                case 2:
                    printf("HP selected.\n");
                    break;
                default:
                    printf("Invalid brand choice.\n");
            }
            break;

        default:
            printf("Invalid main choice.\n");
    }

    return 0;
}
