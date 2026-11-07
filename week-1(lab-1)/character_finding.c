#include<stdio.h>

// Program to check whether a given character is uppercase letter, lowercase, digit or a special character;

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);               // In c a single character variable(ch) can be compared with another
                                    // single character only. Hence we should only use single quotes
    if(ch>='A' && ch<='Z'){         // For comparision in if statements
        printf("It's a uppercase letter");
    }else if(ch>='a' && ch<='z'){
        printf("It's a lowercase letter");
    }else if(ch>='0' && ch<='9'){
        printf("It's a number");
    }else{
        printf("%c is a special character.\n",ch);
    }
    return 0;
}