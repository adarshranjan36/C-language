#include<stdio.h>
int main(){
	int year,month,n,days=0;
	printf("Year :");
	scanf("%d",&year);
	printf("month :");
	scanf("%d",&month);
	if (year%4==0){
		if (year%100==0){
			if (year%400==0){
				n=1;
			}
			else n=0;
		}
		else n=1;
	}
	else n=0;
	switch (month){
		case(1):
			days=days+31;
		case(2):
			if (n==0)
				days=days+28;
			else 
			days=days+29;
		case(3):
			days=days+31;
		case(4):
			days=days+30;
		case(5):
			days=days+31;
		case(6):
			days=days+30;
		case(7):
			days=days+31;
		case(8):
			days=days+31;
		case(9):
			days=days+30;
		case(10):
			days=days+31;
		case(11):
			days=days+30;
		case(12):
			days=days+31;
			
		
	}
	printf("total days = %d",days);
	return 0;
}
