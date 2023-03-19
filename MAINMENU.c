#include<stdio.h>
int main(){
    int ch,n1,n2,res;
    for(;;){
        printf("__________MAIN MENU__________\n");
        printf("1. Addition         2. Subtraction\n3. Multiplication   4.Division\n5. Percentage       0.exit\n");
        printf("_____________________________\n");
        printf("enter your choice");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("enter first number");
                    scanf("%d",&n1);
                    printf("enter second number");
                    scanf("%d",&n2);
                    res=n1+n2;
                    printf("sum=%d\n",res);
                    break;
            case 2: printf("enter first number");
                    scanf("%d",&n1);
                    printf("enter second number");
                    scanf("%d",&n2);
                    res=n1-n2;
                    printf("subtraction=%d\n",res);
                    break;
            case 3: printf("enter first number");
                    scanf("%d",&n1);
                    printf("enter second number");
                    scanf("%d",&n2);
                    res=n1*n2;
                    printf("multiplication=%d\n",res);
                    break;
            case 4: printf("enter first number");
                    scanf("%d",&n1);
                    printf("enter second number");
                    scanf("%d",&n2);
                    res=n1/n2;
                    printf("division=%d\n",res);
                    break;
            case 5: printf("enter first number");
                    scanf("%f",&n1);
                    printf("enter second number");
                    scanf("%f",&n2);
                    res= (n1/n2)*100;
                    printf("percentage=%f\n",res);
                    break;
            case 0: exit(0);
            default: printf("invalid input");

        }

    }
    return 0;
}

