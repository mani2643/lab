#include <stdio.h>
#include <string.h>
// Write a program to reverse a string using pointers
int main(){
    char str[100] = "mani";
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string = %s\n",str);

    return 0;
}