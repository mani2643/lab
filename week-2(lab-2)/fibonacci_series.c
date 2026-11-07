#include<stdio.h>

// Program to print fibonacci series upto n terms

int main(){
    int n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Please enter a +ve integer greater than 0");
        return 1;
    }

    long long first = 0, second = 1, next;

    printf("\nFibonacci series up to %d terms:\n",n);

    for(int i = 1; i <= n; i++){
        if(i == 1){
            printf("%lld\n",first);
        } else if(i == 2){
            printf("%lld\n",second);
        } else{
            next = first + second;
            printf("%lld\n",next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}