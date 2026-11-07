#include<stdio.h>
#include<string.h>

int main(){

    char name1[50];
    char name2[50];

    // Using scanf() function;
    printf("Enter your name: ");
    scanf("%s",&name1);
    printf("%s",name1);
    // scanf() method truncates on whitespace. i.e it stops as soon as it hits a white space, tab or newline;

    // Using fgets() method;

    // whereas fgets() method reads spaces and even tabs until it encounters a \n newline character;

    printf("Enter your name: ");
    fgets(name2,sizeof(name2),stdin);
    name2[strlen(name2)-1]='\0';
    printf("%s",name2);

    return 0;
}