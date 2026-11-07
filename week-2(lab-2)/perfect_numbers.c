#include<stdio.h>

// Program to print perfect numbers between given range;

int main(){
    int start,end;

    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending range: ");
    scanf("%d",&end);

    printf("\nPerfect numbers between %d and %d are: \n",start,end);

    int found = 0;

    for(int i = start; i <= end; i++){
        if(i<=0){
            continue;
        }

        int sum = 0;

        for (int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }

        if(sum == i){
            printf("%d\n",i);
            found = 1;
        }
    }

    if(!found){
        printf("None found in the range.\n");
    }

    return 0;
}