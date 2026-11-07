#include <stdio.h>
#include <stdlib.h>
//Write a program to dynamically allocate memory for n integers and find their sum.
// We need to include that "stdlib.h" in the header of the c file to use that 
// dynamic memroy allocation functions
int main(){
    int n;
    int sum = 0;
    int *ptr;

    printf("Enter the number of integers: ");
    scanf("%d",&n);
    
    ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers: \n",n);

    for(int i=0;i<n;i++){
        // scanf("%d",&ptr[i]);
        scanf("%d",(ptr + i));
        // sum += ptr[i];
        sum += *(ptr + i);
    }

    printf("Sum = %d\n",sum);
    
    free(ptr);

    return 0;
}