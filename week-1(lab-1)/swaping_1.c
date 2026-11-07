#include<stdio.h>

// Swaping of two given numbers without using third variable

int main(){
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}