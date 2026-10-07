#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1,num2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("the gratest number is number1: %d",num1);
    }
    else
    {
        printf("the gratest number is number2:%d",num2);
    }


}