//take input as minutes and convert it to hours and minutes
#include<stdio.h>
int main(){
    int hours , minutes ;
    printf("Enter minutes");
    scanf("%d",&minutes);
    hours = (minutes/60);
    minutes = (minutes%60);
    printf("%d hours %d minutes",hours , minutes);
    return 0;

}
