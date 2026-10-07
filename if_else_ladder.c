#include<stdio.h>
#include<Stdlib.h>
int main(void)
{
    int a,b,choice,sum,difference,multiplication,division; 
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    printf("1-for addition\n 2-for substraction\n 3-for multiplication \n 4-for division\n enter your choice : \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        sum=a+b;
        printf("The sum of 2 number is : %d",sum);
    }
        else if(choice==2 )
        {
            difference=a-b;
            printf("The differece of 2 number is :%d",difference);
        }
        else if(choice==3)
        {
            multiplication=a*b;
            printf("The product of 2 number is :%d",multiplication);
        }
        else if(choice==4)
        {
            division=a/b;
            printf("The division of 2 numbers is:%d",division);
        }
        else{
            printf("please choose the option from above list only.THANK YOU");
        }
    }