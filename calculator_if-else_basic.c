#include <stdio.h>
int main(){
    float a,b;
    int op;
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    printf("Select operator:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    scanf("%d",&op);
    if(op==1){
        printf("The result is %.2f",a+b);
    }
    else if(op==2){
        printf("The result is %.2f",a-b);
    }
    else if(op==3){
        printf("The result is %.2f",a*b);
    }
    else if(op==4){
        if(a==0 || b==0){
            printf("Invalid operation");
        }
        else{
             printf("The result is %.2f",a/b);
        }
    }
    else if(op==5){
        printf("The result is %d", (int)a % (int)b);
    }
    else{
        printf("Invalid operator!!");
    }
}