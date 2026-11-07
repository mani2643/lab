#include <stdio.h>
#include <stdlib.h>
//Write a program to increase the size of a dynamically allocated array using realloc(). 
int main(){
    int n,newSize;
    int *arr;

    printf("Enter no.of elements: ");
    scanf("%d",&n);
    // dynamically allocating the memory;
    arr = (int *)calloc(n,sizeof(int));
    
    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i=0;i<n;i++){
        scanf("%d",(arr + i));
    }
    
    printf("Enter new size of the array: ");
    scanf("%d",&newSize);

    if(newSize <= n || newSize <= 0){
        printf("Enter a valid larger size!");
        free(arr);
        return 1;
    }
    arr = realloc(arr,newSize*sizeof(int));

    for(int i=n;i<newSize;i++){
        printf("Enter element at index %d: ",i);
        scanf("%d",(arr+i));
    }

    printf("Update array: \n");
    for(int i=0;i<newSize;i++){
        printf("%d ",*(arr + i));
    }

    free(arr);

    return 0;
}