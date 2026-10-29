#include <stdio.h>

int main(){
    int n,i,j,temp,swap=0;
    printf("Enter the no. of value in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++){
        for(i=0;i<n-1-j;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap+=1;
            }
        }
    }
    printf("\nSorted array :\n");
    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Total swap=%d\n",swap);
    return 0;
}