#include <stdio.h>
//Write a program to copy one string into another using pointers without using strcpy(). 
int main(){
    char str1[100] = "Hello";
    char str2[100] = "World";
    char *ptr1 = str1;
    char *ptr2 = str2;

    //copying string1 into string2;
    int i=0;
    while(*(ptr1 + i) != '\0'){
        *(ptr2 + i) = *(ptr1 + i);
        i++;
    }
    *(ptr2 + i) = '\0';

    printf("Copied string is: %s",ptr2);

    return 0;
}