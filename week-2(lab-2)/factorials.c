#include<stdio.h>

// Program to print the factorials between given range;

int main(){

    int start,end;

    printf("Enter the start value: ");
    if(scanf("%d",&start)!=1 || start<0){
        printf("Error, invalid start value!");
        return 1;
    }

    printf("Enter the end value: ");
    if(scanf("%d",&end)!=1 || end<start){
        printf("Error, invalid end value");
        return 1;
    }

    printf("Factorials between %d and %d are: \n",start,end);

    for(int num = start;num<=end;num++){
        
        long long fact = 1;

        for(int i = 1; i <= num; i++){
            fact = fact * i;
        }

        printf("Factorial of %d is: %lld\n",num,fact);
    }

    return 0;
}