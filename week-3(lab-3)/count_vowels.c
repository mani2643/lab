#include<stdio.h>

int main(){

    int vowels=0;
    int consonants=0;
    int spaces=0;
    int digits=0;
    int special_chars=0;

    char str[] = "Hello@123";
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'||str[i]=='U'){
                vowels++;
            }else{
                consonants++;
            }
        }else if(str[i]==' '){
            spaces++;
        }else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }else{
            special_chars++;
        }
    }

    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    printf("digits: %d\n",digits);
    printf("spaces: %d\n",spaces);
    printf("special_characters :%d\n",special_chars);

    return 0;
}