#include <stdio.h>

int main(){
    int whole;
    float gpa;
    float decimal;

    printf("Enter your gpa: (0.0) to (4.0)");
    scanf("%f",&gpa);

    if(gpa<0 || gpa>4.0){
        printf("Invalid gpa");
        return 0;
    }

    whole = (int)gpa;
    decimal = gpa - whole;

    switch(whole){
        case 4:
            
    }
}