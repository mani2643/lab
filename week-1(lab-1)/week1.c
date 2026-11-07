#include<stdio.h>

// program to check whether the given number is even or odd;

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d is even number",n);
    }else{
        printf(" %d is odd number",n);
    }
    return 0;
}

// Program to find whether given number is positive, negative or zero

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0){
        printf("%d is a postive number",n);
    }else if(n<0){
        printf("%d is a negative number",n);
    }else{
        printf("%d is zero",n);
    }
    return 0;
}

// Program to check whether a given character is uppercase letter, lowercase, digit or a special character;

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);               // In c a single character variable(ch) can be compared with another
                                    // single character only. Hence we should only use single quotes
    if(ch>='A' && ch<='Z'){         // For comparision in if statements
        printf("It's a uppercase letter");
    }else if(ch>='a' && ch<='z'){
        printf("It's a lowercase letter");
    }else if(ch>='0' && ch<='9'){
        printf("It's a number");
    }else{
        printf("%c is a special character.\n",ch);
    }
    return 0;
}

// program to check whether given year is a leap year or not

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("%d is a leap year",year);
            }else{
                printf("%d is not a leap year",year);
            }
        }else{
            printf("%d is a leap year",year);
        }
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}

// program to print memory allocation for all data types in C;

// int needs 4 bytes memory
// float needs 4 bytes of memory
// char needs only 1 byte
// short needs only 2 bytes of memory
// double needs 8 bytes of memory

// sizeof() asks how many bytes does this data type need;
// %zu is used to print the value returned by the sizeof(); similar to the %f is used to print float
int main(){
    printf("char: %zu \n",sizeof(char));
    printf("float: %zu \n",sizeof(float));
    printf("integer: %zu \n",sizeof(int));
    printf("short: %zu \n",sizeof(short));
    printf("double: %zu \n",sizeof(double));

    return 0;
}

// Level - 2;

#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    char x;
    printf("Enter the first operand: ");
    scanf("%d",&a);

    printf("Enter the second operand: ");
    scanf("%d",&b);

    printf("Enter a operator: ");
    scanf(" %c",&x);

    switch(x){
        case '+':
            printf("Result is: %d",a + b);
            break;
        case '-':
            printf("Result is: %d",a-b);
            break;
        case '*':
            printf("Result is: %d",a*b);
            break;
        case '/':
            if(b!=0){
                printf("Result is: %d",a/b);
            }else{
                printf("Division by zero is not accepted");
            }
            break;
        case '%':
            if(b!=0){
                printf("Result is: %d",a%b);
            }else{
                printf("Modulo by zero is not accepted");
            }
            break;
        case '^':
            printf("Result is: %f",pow(a,b));
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}


// Swaping of two given numbers without using third variable

int main(){
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}

//program to swap two given using an extra variable;

int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int x;
    
    x = b;
    b = a;
    a = x;

    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}

// program to check whether a given number is a perfect square without using a library square-root function

int main(){
    int num;
    int isPerfectSquare = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<0){
        printf("Negative numbers cannot have a perfect square");
        return 0;
    }

    for(int i=0;i*i<=num;i++){
        if(i*i==num){
            isPerfectSquare = 1;
            break;
        }
    }
    if(isPerfectSquare){
        printf("%d is a perfect square",num);
    }else{
        printf("%d is not a perfect square",num);
    }
    return 0;
}

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

#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    char x;
    printf("Enter the first operand: ");
    scanf("%d",&a);

    printf("Enter the second operand: ");
    scanf("%d",&b);

    printf("Enter a operator: ");
    scanf(" %c",&x);

    switch(x){
        case '+':
            printf("Result is: %d",a + b);
            break;
        case '-':
            printf("Result is: %d",a-b);
            break;
        case '*':
            printf("Result is: %d",a*b);
            break;
        case '/':
            if(b!=0){
                printf("Result is: %d",a/b);
            }else{
                printf("Division by zero is not accepted");
            }
            break;
        case '%':
            if(b!=0){
                printf("Result is: %d",a%b);
            }else{
                printf("Modulo by zero is not accepted");
            }
            break;
        case '^':
            printf("Result is: %f",pow(a,b));
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}


// program to find the largest of three given numbers using only the conditional(ternary) operator,
// without using any if-else statement;

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c)
                      : ((b > c) ? b : c);

    printf("Largest number is: %d", largest);

    return 0;
}


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