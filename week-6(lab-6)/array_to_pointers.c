#include <stdio.h>
//c program using array of pointers to a structure to read and display the data of students
struct student {
    int rollno;
    char name[30];
    float marks;
};

int main(){
    struct student s[3];
    struct student *ptr[3];

    //Assigning address to array of pointers;
    for(int i=0;i<3;i++){
        ptr[i] = &s[i];
    }
    //Reading student details:
    printf("Enter details of 3 students: \n");

    for(int i=0;i<3;i++){
        printf("\nEnter details of students %d:\n",i+1);

        printf("Enter roll number: ");
        scanf("%d",&ptr[i]->rollno);

        printf("Enter name: ");
        scanf("%s",ptr[i]->name);

        printf("Enter marks: ");
        scanf("%f",&ptr[i]->marks);
    }
    //Displaying student details;
    printf("\nStudent Details: \n");

    for(int i=0;i<3;i++){
        printf("\nStudent %d: \n",i+1);
        printf("Roll number: %d\n",ptr[i]->rollno);
        printf("Name: %s\n",ptr[i]->name);
        printf("Marks: %.2f\n",ptr[i]->marks);
    }

    return 0;
}