//wap to convert total number of days into months and number of days
#include<stdio.h>
int main(){
    int  months , days;
    printf("enter the number of days");
    scanf("%d",&days);
    months=(days/30);
    days= days%30;
    printf( "%d monts and %d days",months,days);
    return 0;
}
