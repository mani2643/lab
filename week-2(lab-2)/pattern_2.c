#include<stdio.h>

// program to print pattern_2 i.e right angle triangle;
int main(){

    int n;

    printf("Enter a no.of rows: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}