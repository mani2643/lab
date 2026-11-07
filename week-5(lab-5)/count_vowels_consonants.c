#include <stdio.h>
//Write a program to count vowels and consonants in a string using pointers. 

int main(){
    char str[100] = "Hello World@123";
    char *ptr = str;
    int vowels=0,consonants=0,spaces=0,special_chars=0,digits=0;

    while(*ptr != '\0'){
        char ch = *ptr;

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U'){
                    vowels++;
                }else{
                    consonants++;
                }
        }else if(ch >= '0' && ch <= '9'){
            digits++;
        }else if(ch == ' '){
            spaces++;
        }else{
            special_chars++;
        }

        ptr++;
    }

    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",consonants);
    printf("Digits = %d\n",digits);
    printf("spaces = %d\n",spaces);
    printf("special_chars = %d",special_chars);

    return 0;
}