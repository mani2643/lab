#include<stdio.h>

// Program to print even numbers upto n;

int main(){

    int n;

    printf("Enter a number: ");
    
    // Checking if scanf reads an integer successfully;

    if(scanf("%d",&n)!=1){
        printf("Invalid input!, Please enter a valid integer!.\n");
        return 1;   // It tells that there is a error in this code
    }

    if(n<0){
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Even numbers upto %d:\n",n);

    for(int i=0;i<=n;i += 2){
        printf("%d\n",i);
    }

    return 0;           // It tells that the program is successfully executed without any errors;

}