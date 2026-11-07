#include<stdio.h>
#include<math.h>

void isArmstrong(int start,int end){

    for(int num=start;num<=end;num++){

        int original=0,sum=0,digits=0,digit=0,temp=0;

        original = num;
        temp = num;

        while(temp>0){
            digits++;
            temp = temp/10;
        }

        temp = original;

        while(temp>0){
            digit = temp%10;
            sum = sum + pow(digit,digits);
            temp = temp/10;
        }

        if(sum == original){
            printf("%d ",original);
        }
    }

}
int main(){

    int start,end;

    printf("Enter a start value: ");
    if(scanf("%d",&start)!=1|| start < 0){
        printf("Invalid input!");
        return 1;
    }

    printf("Enter a end value: ");
    if(scanf("%d",&end)!=1|| end<start){
        printf("Invalid input");
        return 1;
    }

    isArmstrong(start,end);

    return 0;
}