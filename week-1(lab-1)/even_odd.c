#include<stdio.h>

// program to check whether the given number is even or odd;

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d is even number",n);
    }else{
        printf(" %d is odd number",n);
    }
    return 0;
}