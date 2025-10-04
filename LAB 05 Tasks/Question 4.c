#include <stdio.h>

int main() {
    int continent, country;

    printf("Select a continent:\n");
    printf("1. Asia\n");
    printf("2. Europe\n");
    printf("Enter your choice: ");
    scanf("%d", &continent);

    switch (continent) {
        case 1: // Asia
            printf("\nYou selected Asia.\n");
            printf("Select a country:\n");
            printf("1. Pakistan\n");
            printf("2. India\n");
            printf("Enter your choice: ");
            scanf("%d", &country);

            switch (country) {
                case 1:
                    printf("Country: Pakistan\n");
                    break;
                case 2:
                    printf("Country: India\n");
                    break;
                default:
                    printf("Invalid country choice in Asia.\n");
            }
            break;

        case 2: // Europe
            printf("\nYou selected Europe.\n");
            printf("Select a country:\n");
            printf("1. France\n");
            printf("2. Germany\n");
            printf("Enter your choice: ");
            scanf("%d", &country);

            switch (country) {
                case 1:
                    printf("Country: France\n");
                    break;
                case 2:
                    printf("Country: Germany\n");
                    break;
                default:
                    printf("Invalid country choice in Europe.\n");
            }
            break;

        default:
            printf("\nInvalid continent choice.\n");
    }

    return 0;
}
