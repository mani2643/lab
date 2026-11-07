#include<stdio.h>

// Program to check whether given number is a palindrome or not

int main(){

    int num,reverse = 0,remainder,original;

    printf("Enter a number to check: ");
    scanf("%d",&num);

    original = num;

    while(num>0){
        remainder = num % 10;
        reverse = (reverse*10) + remainder;
        num = num/10;
    }
    if(reverse==original){
        printf("It's a palindrome");
    }
    else{
        printf("It's not a palindrome");
    }

    return 0;
}