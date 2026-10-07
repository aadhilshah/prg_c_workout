#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }

}