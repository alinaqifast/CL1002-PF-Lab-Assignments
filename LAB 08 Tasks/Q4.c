#include <stdio.h>

int main() {
    // Store temperatures for 7 days and 3 time slots (Morning, Afternoon, Night)
    int temperature[7][3] = {
        {20, 28, 22},
        {21, 30, 23},
        {19, 27, 21},
        {22, 31, 24},
        {20, 29, 23},
        {18, 25, 20},
        {23, 32, 25}
    };

    // Table Header
    printf("| Day | Morning | Afternoon | Night   |\n");
    printf("---------------------------------------\n");

    // Loop through each day
    for (int i = 0; i < 7; i++) {
        printf("| %3d |", i + 1);  // Print day number

        // Print temperatures for each time of day
        for (int j = 0; j < 3; j++) {
            printf(" %8d |", temperature[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDaily Averages\n\n");

    // Calculate and print daily average temperature
    for (int a = 0; a < 7; a++) {
        int sum = 0;

        for (int s = 0; s < 3; s++) {
            sum += temperature[a][s];
        }

        float daily_avg = sum / 3.0f;
        printf("Day %d: %.2f\n", a + 1, daily_avg);
    }

    return 0;
}
