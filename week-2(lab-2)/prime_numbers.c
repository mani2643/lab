#include<stdio.h>

// Program to check whether the given number is a prime number or not;

int main(){
    int num;
    int fact=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>1){
        for(int i=1;i<=num;i++){
            if(num%i==0){
                fact+=1;
            }
        }
        if(fact==2){
            printf("%d is a prime number!",num);
        }else{
            printf("%d is not a prime number!",num);
        }

    }else if(num==1){
        printf("%d is not a prime number",num);
    }else{
        printf("Negative numbers and zero are not prime numbers");
    }
    
    return 0;
}