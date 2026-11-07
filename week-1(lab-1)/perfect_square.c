#include<stdio.h>

// program to check whether a given number is a perfect square without using a library square-root function

int main(){
    int num;
    int isPerfectSquare = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<0){
        printf("Negative numbers cannot have a perfect square");
        return 0;
    }

    for(int i=0;i*i<=num;i++){
        if(i*i==num){
            isPerfectSquare = 1;
            break;
        }
    }
    if(isPerfectSquare){
        printf("%d is a perfect square",num);
    }else{
        printf("%d is not a perfect square",num);
    }
    return 0;
}