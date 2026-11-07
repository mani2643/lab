#include<stdio.h>

// Program to calculate the average of n numbers;

int main(){
    int n,sum=0;

    printf("Enter the count of numbers (n): ");
    scanf("%d",&n);

    if(n > 0){
        for(int i=1;i<=n;i++){
            sum = sum + i;
        }
    }else{
        printf("Please enter a number greater than 0.\n");
    }
    

    float average = (float)sum/n;

    printf("The average of %d numbers is: %.2f",n,average);

    return 0;
    
}