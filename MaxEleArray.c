//maximum element in the array;
#include<stdio.h>
int main(){
    int n,max=0;
    int arr[n];
    printf("enter the array size");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max =%d",max);
    return 0;

}

