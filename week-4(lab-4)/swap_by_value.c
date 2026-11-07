#include <stdio.h>

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// This is because the function just taking the copies of those given variables instead of taking originals
// so it is swaping the values but only for copies not originals hence it's not working;