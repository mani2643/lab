#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int freq[256] = {0};
    int i;

    // getting the input from the user;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';

    for(i=0;str[i] != '\0';i++){
        freq[str[i]]++;
    }

    printf("\nCharacter frequencies: ");
    for(i=0;i<256;i++){
        if(freq[i] != 0){
            printf("%c : %d\n",i,freq[i]);
        }
    }

    return 0;
}