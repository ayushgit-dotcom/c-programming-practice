#include <stdio.h>
int main(){
    int i,n;
    printf("Enter no. of value in array(1-20):");
    scanf("%d", &n);
    int a[n];
    if(n<=0){
        printf("Invalid array size!!");
        return 1;
    }
    
    //to enter array by user
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    
    //for sum
    int sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Sum=%d\n",sum);

    //to find max and min
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }      
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d\n",min);

    //avg. of the array
    float avg=sum/(float)n;
    printf("Average=%.2f\n",avg);
    
    return 0;
}