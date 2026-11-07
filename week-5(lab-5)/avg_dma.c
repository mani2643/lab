#include <stdio.h>
#include <stdlib.h>
//Write a program to dynamically store n numbers using calloc() and calculate the average. 
int main(){
    int n,sum = 0;
    int *arr;
    float avg = 0;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    // dymaically allocating the memory;
    arr = (int *)calloc(n,sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter array of elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }

    avg = (float)sum/n;

    printf("Average of elements in the array: %.2f",avg);

    free(arr);

    return 0;
}