#include<stdio.h>
#include<math.h>

// Program to check whether given number is a Armstrong number or not, in the given range;

int main(){

    int start,end;

    printf("Enter the starting number of the range: ");
    if(scanf("%d",&start)!=1 || start < 0){
        printf("Invalid starting range!.\n");
        return 1;
    }

    printf("Enter the ending number of the range: ");
    if(scanf("%d",&end)!=1 || end<start){
        printf("Invalid ending range.\n");
        return 1;
    }

    printf("\nArmstrong numbers between %d and %d are:\n",start,end);

    int countFound = 0;

    for(int num = start;num <= end;num++){
        int temp = num;

        int digits = (num == 0) ? 1 : 0;

        int sum = 0;

        while(temp != 0){
            digits++;
            temp/=10;
        }
        temp = num;
        while(temp!=0){
            int remainder = temp%10;
            sum = sum + round(pow(remainder,digits));
            temp = temp/10;
        }

        if(sum == num){
            printf("%d\n",num);
            countFound++;
        }
    }

    if(countFound == 0 ){
            printf("No armstrong numbers are found!");
    }

    return 0;
}