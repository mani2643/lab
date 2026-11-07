#include<stdio.h>

// char concat(char str1[],char str2[]);
int main(){

    char str1[100] = "I Love ";
    char str2[] = "Coding";
    
    int i,j;

    for(i=0;str1[i]!='\0';i++){
        
    }

    for(j=0;str2[j]!='\0';j++){
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("The result is: %s",str1);
    return 0;
}