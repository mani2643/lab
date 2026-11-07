#include <stdio.h>

void swap(int *x,int *y);

int main(){
    int x, y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);

    printf("Before swapping: %d %d\n",x,y);

    swap(&x,&y);

    printf("After swapping: %d %d\n",x,y);

    return 0;
}

void swap(int *x,int *y){
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}