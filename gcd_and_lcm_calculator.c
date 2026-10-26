#include <stdio.h>

int main(){
    int a,b,lcm,gcd,remainder;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int x=a;
    int y=b;
    while(b!=0){
        remainder=a%b;
        a=b;
        b=remainder;   
    }
    gcd=a;
    printf("GCD = %d",gcd);
    lcm=(x*y)/gcd;
    printf("LCM = %d",lcm);
    return 0;
}