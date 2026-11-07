#include<stdio.h>

// Program to find whether given number is positive, negative or zero

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0){
        printf("%d is a postive number",n);
    }else if(n<0){
        printf("%d is a negative number",n);
    }else{
        printf("%d is zero",n);
    }
    return 0;
}