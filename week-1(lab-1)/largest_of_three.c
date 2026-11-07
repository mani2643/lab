#include <stdio.h>

// program to find the largest of three given numbers using only the conditional(ternary) operator,
// without using any if-else statement;

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c)
                      : ((b > c) ? b : c);

    printf("Largest number is: %d", largest);

    return 0;
}