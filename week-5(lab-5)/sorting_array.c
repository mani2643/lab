#include <stdio.h>

int main(){
    int n,temp;
    int arr[100];
    int *ptr = arr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array of elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(arr + i));
    }
    // sorting the array;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    printf("After sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr + i));
    }

    return 0;
}