#include<stdio.h>


int main(){
    int arr[100],n;

    //Read the number of elements

    printf("Enter the no.of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the %d element in the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    // Displaying array with along with indices and byte offsets

    printf("\nIndex Element Byte Offset\n");
    printf("-------------------------\n");

    for(int i=0;i < n;i++){
        printf("%d\t%d\t%d\n",i,arr[i],i*sizeof(arr[i]));
    }
}