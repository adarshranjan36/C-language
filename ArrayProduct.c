//calculate the product of all elements in the array;
#include<stdio.h>
int main(){
    int pro=1;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        pro=pro*arr[i];
    }
    printf("product=%d",pro);
    return 0;
}
