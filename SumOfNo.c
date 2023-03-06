//wap to find the sum of first n natural number;
#include<stdio.h>
int main(){
    int number,sum=0;
    printf("enter the number");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    printf("sum=%d",sum);
}
