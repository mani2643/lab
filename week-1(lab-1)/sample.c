#include<stdio.h>

int main(){
    int num;
    int isperfectsquare = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=0;i*i<=num;i++){
        if(i*i==num){
            isperfectsquare = 1;
        }
    }

    if(isperfectsquare){
        printf("%d is a perfectsquare",num);
    }else{
        printf("%d is not a perfectsquare",num);
    }

}



