#include<stdio.h>

// program to read student's marks and print corresponding grade (A/B/C/D/F)

int main(){
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>0 && marks<=100){
        if(marks>=90 && marks<=100){
            grade = 'A';
        }else if(marks<90 && marks>=80){
            grade = 'B';
        }else if(marks<80 && marks>=70){
            grade = 'C';
        }else if(marks<70 && marks>=60){
            grade = 'D';
        }else if(marks<60 && marks>= 50){
            grade = 'F';
        }else if(marks<50 && marks>=0){
            grade = 'R';
        }
    }else{
        printf("Invalid marks");
    }
    

    if(grade=='R'){
        printf("congratulations... you failed!");
    }
    printf("%c is your grade",grade);

    return 0;
}