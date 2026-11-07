#include <stdio.h>
// program using structures to read and display the info about student;
struct student {
    int rollno;
    char name[30];
    float marks;
};

int main(){
    struct student s1;
    //reading student info;
    printf("Enter student roll number: ");
    scanf("%d",&s1.rollno);

    printf("Enter student name: ");
    scanf("%s",s1.name);

    printf("Enter student marks: ");
    scanf("%f",s1.marks);

    //Displaying student information;
    printf("\nStudent Details: \n");
    printf("Roll number: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
    printf("Marks: %.2f\n",s1.marks);

    return 0;
}