#include<stdio.h>

int main(){

    int matrix1[3][3],matrix2[3][3];

    // Getting values in matrix 1;
    printf("Enter the elements of matrix1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    // Getting values in matrix 2;
    printf("Enter the elements of matrix2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    int result[3][3];
    printf("\nAddition of two matrices:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}