// wap if people is less than 18 years not eligible for work and if they are greater than or equal to 18 and less than or equal to 50 they are leigible
#include<stdio.h>
int main (){
    int age;
    printf("enter the age");
    scanf("%d",age);
    if (age>=18 && age<=50){
        printf("they are eligible");
    }
    else{
        printf("they are not eligible");
    }
    return 0;
}
