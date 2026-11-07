// Write a program that converts a numeric grade
// point (0.0 to 4.0) into a letter grade with +/−
// modifiers using a switch statement on the
// integer part combined with relational checks on
// the decimal part.

#include<stdio.h>

int main(){
    int whole;
    double gpa;
    double decimal;

    printf("Enter your gpa: (0.0) to (4.0): ");
    scanf("%lf",&gpa);

    if(gpa< 0.0 || gpa >4.0){
        printf("Invalid GPA");
        return 0;
    }

    whole = (int)gpa;           // Integer part
    decimal = gpa - whole;      // Decimal part

    switch(whole){
        
        case 4:
            printf("Grade: A+\n");
            break;
        case 3:
            if(decimal >= 0.5){
                printf("Grade: A\n");
            }else{
                printf("Grade: B+\n");
            }
            break;
        case 2:
            if(decimal >= 0.5){
                printf("Grade: B\n");
            }else{
                printf("Grade: C+\n");
            }
            break;
        case 1:
            if(decimal >= 0.5){
                printf("Grade: C\n");
            }else{
                printf("Grade: D\n");
            }
        case 0:
            if(decimal >= 0.5){
                printf("Grade: F\n");
            }else{
                printf("Grade: F\n");
            }
            break;
        default:
            printf("Invalid marks");
    }

    return 0;
}