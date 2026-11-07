#include <stdio.h>

void swap(int *x,int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int a = 10;
    int b = 20;

    printf("Before Swapping:\n");
    printf("%d\t%d\n",a,b);

    swap(&a,&b);
    printf("After swapping:\n");
    printf("%d\t%d",a,b);

    return 0;
}