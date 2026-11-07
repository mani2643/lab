#include<stdio.h>

int fibonacci(int n){
    
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main(){

    int n;
    printf("Enter a number: ");
    if((scanf("%d",&n)!=1) || n<0){
        printf("Invalid input!");
        return 1;
    }

    printf("%d",fibonacci(n));

    return 0;
}