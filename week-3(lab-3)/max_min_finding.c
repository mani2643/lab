#include<stdio.h>

int main(){
    // Finding maximum and minimum element in the array of size n;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("\nEnter the element at %d index: ",i);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("\nMaximum element is: %d\n",max);
    printf("\nMinumum element is: %d\n",min);

    return 0;
}