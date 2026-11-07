#include<stdio.h>
#include<stdbool.h>

int main(){

    char str[] = "madam";
    int length = 0;
    int start = 0;
    bool isFound = true;

    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    int end = length-1;
    while(start<=end){
        
        if(str[start] != str[end]){
            isFound = false;
            break;
        }
        start++;
        end--;
    }

    if(isFound){
        printf("It's a palindrome");
    }else{
        printf("not a palindrome");
    }

    return 0;
}