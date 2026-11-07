#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]){

    char rev[50];
    int length = 0;

    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    //reversing the string;

    for(int i=0;str[i]!='\0';i++){
        rev[i] = str[length-1-i];
    }

    rev[length] = '\0';

    printf("\nAfter reversing we get: \n");
    printf("%s\n",rev);

    // if(str == rev){
    //     printf("%s is a palindrome",str);
    // }else{
    //     printf("%s is not a palindrome",str);
    // }

    // This won't work because when we compare two arrays using ==,
    // we are comparing their memory addresses, not their contents.

    // The same concept applies to arrays in JavaScript, where
    // comparing two separate arrays also compares their references.

    // In C, we can use strcmp() to compare the contents of two strings.

    if(strcmp(str,rev)==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    printf("\nOriginal string: \n");
    printf("%s\n",str);

    if(isPalindrome(str)){
        printf("%s is a palindrome",str);
    }else{
        printf("%s is not a palindrome",str);
    }

    return 0;
}