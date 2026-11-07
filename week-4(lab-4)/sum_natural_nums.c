#include<stdio.h>

int naturalSum(int n){
    
    if(n==0){
        return 0;
    }else{
        return n+naturalSum(n-1);
    }
}
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The sum of %d natural numbers: %d",n,naturalSum(n));

    return 0;
}