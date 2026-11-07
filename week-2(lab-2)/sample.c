#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]){
    char rev[50];
    int length = 0;

    for(int i=0;str[i]!='\0';i++){
        length++;
    }

    for(int i=0;str[i]!='\0';i++){
        rev[i] = str[length-1-i];
    }
    rev[length] = '\0';

    printf("After reversing we get: \n");
    printf("%s\n",rev);

    if(strcmp(str,rev)==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char str[50];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    printf("\nOriginial String: \n");
    printf("%s\n",str);

    if(isPalindrome(str)){
        printf("%s is a palindrome",str);
    }else{
        printf("%s is not a palindrome",str);
    }

    return 0;
}
