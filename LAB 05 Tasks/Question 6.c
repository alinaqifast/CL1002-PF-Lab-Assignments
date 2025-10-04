#include <stdio.h>

int main() {
    int a = 5, b;

    printf("Initial value of a = %d\n", a);

    // Pre-increment
    b = ++a;   // a is increased first, then assigned to b
    printf("\nAfter b = ++a:\n");
    printf("a = %d\n", a);  // a is now 6
    printf("b = %d\n", b);  // b gets the incremented value (6)

    // Reset a
    a = 5;

    // Post-increment
    b = a++;   // a is assigned first, then increased
    printf("\nAfter b = a++:\n");
    printf("a = %d\n", a);  // a is now 6
    printf("b = %d\n", b);  // b gets the old value (5)

    return 0;
}
