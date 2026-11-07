#include<stdio.h>

int main(){

    char name[] = "I Love Coding";
    int sum = 0;

    for(int i=0;name[i]!='\0';i++){
        sum++;
    }
    printf("Size of the given string is: %d ",sum);
    return 0;
}