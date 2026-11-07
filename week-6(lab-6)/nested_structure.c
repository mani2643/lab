#include <stdio.h>
// program to read and display the info of student using nested structure;
struct student {
    int rollno;
    char name[20];
    struct date {
        int day;
        int month;
        int year;
    } dob;
    char address[50];
};

int main(){
    struct student s1;
    //Reading student details;
    printf("Enter student rollno: ");
    scanf("%d",&s1.rollno);

    printf("Enter student name: ");
    scanf("%s",s1.name);

    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d",&s1.dob.day,&s1.dob.month,&s1.dob.year);
    //Displaying student details:
    printf("\nStudent Information: \n");
    printf("Roll number: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
    printf("Date of Birth: %02d-%02d-%04d\n",s1.dob.day,s1.dob.month,s1.dob.year);

    return 0;
}
