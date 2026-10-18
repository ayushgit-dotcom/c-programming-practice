#include <stdio.h>

int main(){
    int num,original,digit,sum=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;
    }
    printf("Sum = %d\n",sum);
    if(sum==original){
        printf("%d is an armstrong number\n",original);
    }
    else{
        printf("%d is not an armstrong number\n",original);
    }
    return 0;
}