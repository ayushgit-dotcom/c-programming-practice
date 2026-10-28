#include <stdio.h>

int main(){
    int n,i,target,found=0;
    printf("Enter the no. of value in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the no. you want to find:");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(a[i]==target){
            found=1;
            printf("No. found at index no.=%d",i);
        }
    }
    if(found==0){
        printf("No. not found!!");
    }
    return 0;
}