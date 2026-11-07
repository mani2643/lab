#include<stdio.h>

//program to swap two given using an extra variable;

int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int x;
    
    x = b;
    b = a;
    a = x;

    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}