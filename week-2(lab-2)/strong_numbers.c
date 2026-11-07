#include<stdio.h>
// Program to print the strong numbers between given range;
int main(){
    int start,end;

    printf("Enter starting range: ");
    scanf("%d",&start);

    printf("Enter ending range: ");
    scanf("%d",&end);

    printf("\nStrong numbers between %d and %d are: \n",start,end);

    int found = 0;

    for(int i = start;i<=end;i++){
        if(i<=0){
            continue;
        }

        int temp = i;
        long long sum = 0;

        while (temp > 0){
            int digit = temp%10;

            long long fact = 1;
            for(int j = 1; j<= digit;j++){
                fact *= j;
            }

            sum += fact;
            temp /=10;
        }

        if(sum == i){
            printf("%d\n",i);
            found = 1;
        }
    }

    if(!found){
        printf("None found in the range.");
    }

    return 0;
}