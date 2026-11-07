#include<stdio.h>
#include<string.h>

int main(){

    char names[5][100];
    char temp[100];
    int i,j;

    printf("Enter the names: \n");

    // Reading and storing strings from the user;
    for(int i=0;i<5;i++){
        printf("Enter the %d name: ",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
        // We need to remove the newline character left over by the fgets
        names[i][strlen(names[i])-1] = '\0';
    }

    // Sort the strings using Bubble Sort logic
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            
            // strcmp returns a number > 0 if the first string comes AFTER the second alphabetically
            if(strcmp(names[j],names[j+1])>0){

                // Swapping the strings using strcpy() function;
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }

    //printing the sorted list;

    printf("\nStrings in Lexicographical order:\n");
    for(i=0;i<5;i++){
        printf("%s\n",names[i]);
    }

    return 0;
}