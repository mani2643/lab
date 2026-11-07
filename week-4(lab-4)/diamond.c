#include <stdio.h>

void diamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    int n;
    printf("Enter a number: ");
    if(scanf("%d",&n)!=1 || n < 0){
        printf("Invalid input!");
        return 1;
    }

    diamond(n);

    return 0;
}