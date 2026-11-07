#include<stdio.h>
#include<stdbool.h>

int main(){

    int n;
    bool isFound = false;
    printf("Enter the no.of elements: ");
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the element at index %d: ",i);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("\nEnter the key value to search: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            printf("\nFound at index %d!\n",i);
            isFound = true;
            break;
        }
    }
    if(!isFound){
        printf("Not found!");
    }

    return 0;
}