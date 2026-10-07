#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The total sum of numbers are:");
    for(i=0;i<=num;i++)
    {
        sum=sum+i;

    }
    printf("%d",sum);

}