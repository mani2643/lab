#include <stdio.h>
//Write a program to find the largest element in an array using pointer arithmetic. 

int main(){
    int arr[5] = {25,10,65,40,30};
    int *ptr = arr;
    int largest = *ptr;

    for(int i=0;i<5;i++){
        if(*(ptr+i) > largest){
            largest = *(ptr+i);
        }
    }

    printf("Largest element = %d\n",largest);

    return 0;
}