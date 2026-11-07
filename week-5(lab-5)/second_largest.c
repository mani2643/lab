#include <stdio.h>

int main(){
    int n,temp,second_largest;
    int arr[100];
    int *ptr = arr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array of elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr + i));
    }
    // sorting the array
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i) > *(ptr+j)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }

    second_largest = *(ptr+n-2);

    printf("\nSecond largest element is: %d",second_largest);

    //second_largest = *(ptr+(n-2)); // this is fine for normal array
    //but if array is like this : 10 20 30 50 50 it will give 50 which is incorrect;

    return 0;
}