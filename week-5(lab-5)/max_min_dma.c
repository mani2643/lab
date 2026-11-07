#include <stdio.h>
#include <stdlib.h>
//Write a program to create a dynamically allocated array and find the maximum and minimum element
int main(){
    int n,max,min;
    int *arr;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    // dynamically allocating the memory;
    arr = (int *)calloc(n,sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter array of elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
        // scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(int i=1;i<n;i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
        if(*(arr + i) < min){
            min = *(arr + i);
        }
    }

    printf("Maximum element = %d\n",max);
    printf("Minimum element = %d\n",min);
    // free allocated memory;
    free(arr);

    return 0;
}