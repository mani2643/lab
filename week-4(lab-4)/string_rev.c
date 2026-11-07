#include<stdio.h>
#include<string.h>

void stringRev(char str[]){

    char rev[50];
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    for(int i=0;i<length;i++){
        rev[i] = str[length-1-i];
    }

    rev[length] = '\0';

    printf("%s",rev);
}
int main(){

    char str[50];

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    stringRev(str);

    return 0;
}