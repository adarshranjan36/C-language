#include <stdio.h>
int main(){
	int r,notes_500,notes_200,notes_100,notes_10;
	printf("enter amount:");
	scanf("%d",&r);
	notes_500=r/500;
	notes_200=r%500/200;
	notes_100=r%500%200/100;
	notes_10=r%500%200%100/10;
	printf("no of 500 notes =%d\n" ,notes_500);
	printf("no of 200 notes = %d\n",notes_200);
	printf("no of 100 notes = %d\n",notes_100);
	printf("no of 10 notes = %d\n",notes_10);
	return 0;
    
}



