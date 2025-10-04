#include <stdio.h>

int main() {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to 10 terms:\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
