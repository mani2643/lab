#include<stdio.h>

int main(){
    int sum = 0,n;
    float average = 0.0;

    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the %d element value: ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    average = (float)sum/n;

    printf("The sum of the elements in array is: %d\n",sum);
    printf("The average of elements in array is: %.2f\n",average);


    return 0;
}