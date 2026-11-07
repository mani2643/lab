#include <stdio.h>
// program to read, display, add and subtract two complex numbers;
struct complex {
    float real;
    float imag;
};

int main(){
    struct complex c1, c2, sum, diff;
    // reading two complex number;
    printf("Enter the first complex number: ");
    scanf("%f %f",&c1.real,&c1.imag);

    printf("Enter second complex number: ");
    scanf("%f %f",&c2.real,&c2.imag);

    //Displaying complex numbers;
    printf("\nFirst complex number: %.2f + %.2fi",c1.real,c1.imag);
    printf("\nSecond complex number: %.2f + %.2fi",c2.real,c2.imag);

    //Addition;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    //Displaying results;
    printf("\n\nSum = %.2f + %.2fi",sum.real,sum.imag);
    printf("\nDifference = %.2f - %.2fi",diff.real,diff.imag);

    return 0;
}
