#include <stdio.h>
int main() {
   int num,rev=0,rem,temp;
   printf("Enter an integer: ");
   scanf("%d",&num);
   temp=num;
   while(num!=0){
      rem=num%10;
      rev=rev*10+rem;
      num/=10;
   }
   if(temp==rev){
      printf("%d is palindrome",temp);
   }
   else{
      printf("%d is not palindrome",temp);
   }
   return 0;
}
