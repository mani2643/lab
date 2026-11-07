#include<stdio.h>

int main(){

    int matrix[3][3];

    //Taking input from the user;

    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){   
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    // Display Matrix;

    printf("\n****The matrix is**** \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}