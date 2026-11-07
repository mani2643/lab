#include <stdio.h>
// program to demonstrate arrays of Union variables;
union student {
    int rollno;
    float marks;
    char grade;
};

int main(){
    union student s[3];
    // Reading and displaying roll numbers:
    printf("Enter roll numbers of 3 students:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&s[i].rollno);
    }
    printf("\nStudent roll numbers:\n");
    for(int i=0;i<3;i++){
        printf("Student %d: %d\n",i+1,s[i].rollno);
    }
    //Reading and displaying marks;
    printf("\nEnter marks of 3 students:\n");

    for(int i=0;i<3;i++){
        scanf("%f",&s[i].marks);
    }
    printf("\nStudent Marks:\n");

    for(int i=0;i<3;i++){
        printf("Student %d: %.2f\n",i+1,s[i].marks);
    }

    return 0;
}