#include <stdio.h>

int main(){

    char name[] = "I love coding";
    int length = 0;

    for(int i=0;name[i]!='\0';i++){
        length++;
    }

    printf("The length of the given string is: %d",length);

    return 0;
}