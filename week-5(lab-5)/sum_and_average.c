#include <stdio.h>
//Write a program to find the sum and average of array elements using pointers. 

int main(){
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    int sum = 0;
    float avg = 0.0;

    for(int i=0;i<5;i++){
        sum += *(ptr+i);
    }
    avg = (float)sum/5;

    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    return 0;
}
