#include <stdio.h>

int isPrime(int n){
    
    int fact = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact++;
        }
    }
    if(fact==2){
        return 1;
    }else{
        return 0;
    }
}


int main(){

    int n;
    printf("Enter a number to check: ");
    scanf("%d",&n);

    if(isPrime(n)){
        printf("%d is a prime number",n);
    }else{
        printf("%d is not a prime number!",n);
    }

    return 0;
}