#include <stdio.h>

int main(){
    int num;
    char choice;
    do{
        printf("Enter a number :");
        scanf("%d",&num);
        if(num%2==0){
            printf("%d is an even number\n",num);
        }
        else{
            printf("%d is an odd number\n",num);
        }
        printf("Run again? (Y/N):");
        scanf(" %c",&choice);
    }
    while(choice=='y'|| choice=='Y');
    return 0;
}