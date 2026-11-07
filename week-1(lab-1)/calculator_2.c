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