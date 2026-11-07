#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array of elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // sorting elements in an array;
    printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("After sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}