#include<stdio.h>
int main(){
    int n1,n2,n3,sum=0;
    float avg;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    sum=n1+n2+n3;
    avg=sum/3;
    printf("average = %f",avg);
    return 0;
}
